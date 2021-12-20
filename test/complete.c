#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(void)
{
	pid_t child_pid;
	int status, i = 0;
	char *argv[] =   {"/bin/ls","-l","/usr/", NULL};
	
	for (; i < 5; i++)
	{
		child_pid = fork();
		if (child_pid == -1)
			break;
		if (child_pid == 0)
			if(execve(argv[0], argv, NULL) == -1)
			{
				perror("Error:");
			}
		wait(&status);
	}
	printf("\nDone\n");
	return(0);
}