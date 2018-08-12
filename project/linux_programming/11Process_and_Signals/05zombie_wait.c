#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	pid_t pid;
	char *message;
	int n,state;
	int exit_code;

	printf("fork program starting\n");
	pid = fork();
	switch(pid)
	{
		case -1:
			perror("fork failed\n");
			exit(1);
		case 0:
			message = "This is the child";
			n = 3;
			exit_code = 37;
			break;
		default:
			message = "This is the parent";
			wait(&state);
			sleep(10);
			n = 6;
			exit_code = 0;
			break;
	}
	for(;n>0;n--){
		puts(message);
	}
	exit(exit_code);
}
