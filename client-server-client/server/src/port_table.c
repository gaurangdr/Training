unsigned short port[10];
static int count1 = 0;
char port_buf[1024];

int client_fd[1024];

int add_port(int data, int fd)
{
//	printf("%d || port - %d|| added\n", count1, data);
	port[count1] = data;
	client_fd[count1] = fd;
	count1++;
	return 0;
}

int remove_port(int data)
{
	int i;
	for (i = 0; i < count1; i++) {
		if (client_fd[i] == data) {
			count1--;
			break;
		}
	}
	for (; i < count1-1; i++) {
		port[i] = port[i + 1];
		client_fd[i] = client_fd[i + 1];
	}
	return 0;
}

int port_cpy()
{
	int i, len = 0;
	memset(port_buf, '\0', strlen(port_buf));

//	printf("count : %d\n", count1);
	if (count1 == 0) {
		sprintf(port_buf, "No receiver found\n");
//		printf("NO receiver\n");
	}
	else {
		for (i = 0; i < count1; i++) {
			len = strlen(port_buf);
			sprintf(port_buf + len, "%d\n", port[i]);
		}
	}
//	printf("Buffer is: %s", port_buf);
	return 0;
}


int port_index(int data)
{
	int i, flag = 0;
	for (i = 0; i < count1; i++) {
		if (port[i] == data) {
			flag = 1;
			break;
		}
	}
	if (flag)
		return client_fd[i];
	else
		return -1;
}
