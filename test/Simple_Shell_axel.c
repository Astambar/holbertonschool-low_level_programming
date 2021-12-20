#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[], char *execve_arg[])
{
    pid_t child;
    char *command[100], *tok, *ptr = NULL;
    size_t i, number_of_bytes;
    int status;
  
    while (1)
    {
      printf("$ ");
      if (getline(&ptr, &number_of_bytes, stdin) == -1)
      {
           break;
      }

      tok = strtok(ptr, " \t\n\r");
      for (i = 0; i < 16 && tok != NULL; i++)
      {
          command[i] = tok;
          tok = strtok(NULL, " \t\n\r");
      }

      command[i] = NULL;
      child = fork();

      if (child == 0)
      {
          if (execve(command[0], command, execve_arg))
          {
              perror("execve");
              exit(EXIT_FAILURE);
          }
      }
      if (child > 0)
         wait(&status);
    }
    
    putchar('\n'); 
    exit(status);
}
