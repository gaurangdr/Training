#include<stdio.h>
#include<stdlib.h>
//#include<errno.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
//#include<fcntl.h>
#include<string.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<time.h>

#define DESTPORT 3500 /* port number */
#define MSGSIZE 1024 /* data of 1024 byte chunks to be sent */

#define handleError(msg) do { perror(msg); exit(EXIT_FAILURE); } while (0)

int recv_data(void);
int send_data(void);

char buf[MSGSIZE];
char **ptr_buf = NULL;

int main(void)
{
	int mode = 0;


	printf("Select the operation: 1. To send || 2. To receive : ");
	scanf("%d", &mode);
	
	switch(mode) {
		case 1:
			send_data();
			break;
		case 2:
			recv_data();
			break;
		default:
			printf("Wrong input entered\n");
			return 0;
			break;
	}
	return 0;
}

int connect_ser()
{
	int sockfd;
	char serverIpAddr[16] = "192.168.1.12";
	struct sockaddr_in dest_addr;

	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if (!sockfd)
		handleError("Socket create error:");

	dest_addr.sin_family = AF_INET;
	dest_addr.sin_port = htons(DESTPORT);
	dest_addr.sin_addr.s_addr = inet_addr(serverIpAddr);

	if (connect(sockfd, (struct sockaddr *) &dest_addr, sizeof(struct sockaddr))) {
		close(sockfd);
		handleError("Connection error:");
	}

	return sockfd;
}

	
int send_data(void)
{
	int sockfd = connect_ser();
	int len, c, i;


	memset(buf, 0, sizeof(buf)); /* clear buffer */
	strcpy(buf, "send");
	send(sockfd, buf, strlen(buf), 0);

	memset(buf, 0, sizeof(buf)); /* clear buffer */
	len = recv(sockfd, buf, MSGSIZE, 0);

	if (!strcmp(buf, "No receiver found\n")) {
		printf("%sPlease try after sometime\n", buf);
		return 0;
	}

	printf("Available reciever:\n%s\n", buf);

	printf("Select receiver to send : ");
	memset(buf, 0, sizeof(buf));
	scanf("%d",&len);
	sprintf(buf, "%d", len);
	send(sockfd, buf, strlen(buf), 0);

 
	memset(buf, 0, sizeof(buf)); /* clear buffer */
	len = recv(sockfd, buf, MSGSIZE, 0);
	if (!(strcmp(buf, "wrong port"))) {
		printf("Wrong port entered\n");
		close(sockfd);
		return 0;
	}

	printf("Enter message to send or press \"CNTR+D\" to stop sending\n");

	while (c != EOF) {
		memset(buf, 0, sizeof(buf));
		for (i = 0; i < MSGSIZE; ++i) {
			c = fgetc(stdin);
			if (c == 10) {
				buf[i] = '\0';
				break;
			}
			if (c == -1) {
				close(sockfd);
				return 0;
				break;
			}
			buf[i] = (char) c;
		}
		len = strlen(buf);
		if (send(sockfd, buf, len, 0) == -1) {
			close(sockfd);
			handleError("Message send fail error:");
		}
	}
	if (close(sockfd) == -1)
		handleError("Client socket close fail error:");
	return 0;
}


int recv_data(void)
{
	int sockfd = connect_ser();
	int len = 1;

	memset(buf, 0, sizeof(buf)); /* clear buffer */
	strcpy(buf, "recv");
	send(sockfd, buf, strlen(buf), 0);
	memset(buf, 0, sizeof(buf));
	len = recv(sockfd, buf, MSGSIZE, 0);
	printf("Waiting for messasge\n");
	while(len > 0) {
	
		memset(buf, 0, sizeof(buf));
		len = recv(sockfd, buf, MSGSIZE, 0);
		if (len < 1) {
			close(sockfd);
			break;
		}
		if (!strcmp(buf, "1212close1212")) {
			close(sockfd);
			return 0;
			break;
		}
		
		printf("Message receive is : %s\n", buf);
	}
	if (close(sockfd) == -1)
		handleError("Client socket close fail error:");
	return 0;
}
