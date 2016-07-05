#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>

#define DEFAULT_PORT 8000
#define MAXLINE 1024

int main(int argc, char *argv[])
{
	int socket_fd, connetc_fd;
	struct sockaddr_in svaddr;
	char buff[MAXLINE];
	int n;

	//´´½¨socket
	if ((socket_fd = socket(AF_INET, SOCK_STREAM, 0)) == -1)
	{
		printf("create socket error:%s(errno:%d)\n", strerror(errno), errno);
	}

	memset(&svaddr, 0, sizeof(svaddr));
	svaddr.sin_family = AF_INET;
	svaddr.sin_addr.s_addr = htonl;


	if (bind(socket_fd, (struct sockaddr*)&svaddr, sizeof(svaddr)) == -1)
	{
		printf("bind socket error:%s(errno: %d)\n", strerror(errno), errno);
		exit(0);
	}


	if (listen(socket_fd, 10) == -1)
	{
		pri
	}





	char sz[] = "Hello, World!\n";	/* Hover mouse over "sz" while debugging to see its contents */
	printf("%s", sz);
	fflush(stdout); /* <============== Put a breakpoint here */
	return 0;
}