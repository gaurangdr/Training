#include<stdio.h>
#include<netinet/in.h>
#include<errno.h>
#include<pthread.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<ctype.h>
#include "./port_table.c"

#define LISTEN_BACKLOG 50
#define CLIENT_NUMBER 100 /* maximum number of clients simultenuously served */
#define MSGSIZE 1024
#define handle_error(msg) do { perror(msg); exit(EXIT_FAILURE); } while (0)

int count = 0;

pthread_attr_t pattr;

void *connection_handler(void *ptr);
int connect_cl(void);

int main(int argc, char *argv[])
{
	int socketfd = connect_cl(), *clientfd = NULL;

	struct sockaddr_in client_addr;
	unsigned int size = sizeof(client_addr);

	while (1) {
		while (count == CLIENT_NUMBER) /*waiting for the client close*/
			;

		clientfd = (int *) malloc(sizeof(int));

		*clientfd = accept(socketfd, (struct sockaddr *) &client_addr,
					&size);
		if (*clientfd == -1) {
			close(socketfd);
			handle_error("Accept fail error:");
		}

		char str[16]; 
		inet_ntop(AF_INET, &(client_addr.sin_addr), str, 16);
		int clientServerPort = (int) ntohs(client_addr.sin_port);
		add_port(clientServerPort, *clientfd);

		long unsigned int thread;

		pthread_create(&thread, &pattr, connection_handler,
					(void *) clientfd);
		count++; // should use mutex lock on count variable

	}
	if (close(socketfd) == -1)
		handle_error("Server socket close error");
	printf("Server is closed\n");
	pthread_exit(NULL);
}

void *connection_handler(void *ptr)
{
	int len, recv_client, recv_port;
	int clientfd = *(int *) ptr;
	free(ptr);
	char buf[MSGSIZE];

	memset(buf, 0, MSGSIZE);
	len = recv(clientfd, buf, MSGSIZE, 0);

	if(!strcmp(buf, "send")) {

		remove_port(clientfd);

		memset(port_buf, 0, strlen(port_buf));
		port_cpy();
		send(clientfd, port_buf, strlen(port_buf), 0);

		memset(buf, 0, MSGSIZE);
		len = recv(clientfd, buf, MSGSIZE, 0);

		recv_port = atoi(buf);
		recv_client = port_index(recv_port);
		if (recv_client == -1) {
			strcpy(buf, "wrong port");
			send(clientfd, buf, strlen(buf), 0);
			close(clientfd);
			count--;
			pthread_exit(NULL);
		}
	}
	strcpy(buf, "port validated");
	send(clientfd, buf, strlen(buf), 0);

	while (1) {
		memset(buf, 0, MSGSIZE);
		len = recv(clientfd, buf, MSGSIZE, 0);
		if (len == 0) {
			break;
		}
		if (len == -1) {
			count--;
			break;
		}
		if (send(recv_client, buf, len, 0) == -1) {
			break;
		}
	}
	
	memset(port_buf, 0, strlen(port_buf));
	strcpy(buf, "1212close1212");
	send(recv_client, buf, strlen(buf), 0); 
	if (close(clientfd) == -1) {
		fprintf(stderr, "Client socket close error123\n");
		pthread_exit(NULL);
	}
	printf("Client %d connection release successfully\n", clientfd);
	remove_port(clientfd);
	count--;
	
	pthread_exit(NULL);
}

int connect_cl(void)
{

	char ip_add[16] = "192.168.1.12";
	unsigned int portNo = 3500;
	int socketfd;

	socketfd = socket(AF_INET, SOCK_STREAM, 0);
	if (socketfd == -1)
		handle_error("Socket create error:");

	struct sockaddr_in server_addr;
	memset(&server_addr, 0, sizeof(server_addr));
	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(portNo);
	server_addr.sin_addr.s_addr = inet_addr(ip_add);

	if (bind(socketfd, (struct sockaddr *) &server_addr,
					sizeof(server_addr)) == -1) {
		close(socketfd);
		handle_error("Bind error:");
	}

	/* listen: */
	if (listen(socketfd, LISTEN_BACKLOG) == -1) {
		close(socketfd);
		handle_error("Listen fail error:");
	}


	/* pthread attribute init */
	if ((pthread_attr_init(&pattr))) {
		close(socketfd);
		handle_error("Thread attribute initialization failed");
	}
	if (pthread_attr_setdetachstate(&pattr, PTHREAD_CREATE_DETACHED)) {
		close(socketfd);
		handle_error("Thread attribute set to detach state failed");
	}
	return socketfd;
}
