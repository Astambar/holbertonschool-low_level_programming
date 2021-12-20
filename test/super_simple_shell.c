#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

char *get_user_line(void);
char **_strtok(char *str);
void execut_command(char **argv);

/**
* main - Reacrate a mini Shell
*
* Return: 0 (succes)
*/
int main(void)
{
    char *command = NULL;
    char **array_command = NULL;
    int status;
    int loop = 1;
    
    do {
        printf("$ ");
        command = get_user_line();
        array_command = _strtok(command);
        execut_command(array_command);

        free(command);
        free(array_command);
        wait(&status);

    } while (loop);
}

/**
* get_user_line - Get the user line, return without
* \n a the end
*
* Return: The line
*/
char *get_user_line(void)
{
    char *line = NULL;
    ssize_t lineSize = 0;

    lineSize = getline(&line, &lineSize, stdin);
    if (lineSize == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't not read the command\n");
        free(line);
        exit(98);
    }
    if (line[lineSize - 1] == '\n')
        line[lineSize - 1] = '\0';
    return (line);
}

/**
* _strtok - Cut the user input into separate char
* @str: User input
* Return: The 2 dimensionnal array
*/
char **_strtok(char *str)
{
    int bufsize = 10;
    char **array = malloc(sizeof(char *) * bufsize);
    int i = 0, j;
    char* token = strtok(str, " ");
  
    if (!array)
    {
        dprintf(STDERR_FILENO, "Error: Allocation error\n");
        exit(98);
    }

    while (token != NULL)
    {
        array[i] = token;
        i++;
        if (i >= bufsize)
            bufsize += bufsize;
            array = realloc(array, bufsize * sizeof(char *));
            if (!array)
            {
                dprintf(STDERR_FILENO, "Error: Allocation error\n");
                exit(98);
            }
        token = strtok(NULL, " ");
    }
    array[i] = NULL;
    return (array);
}

/**
* execut_command - Execute the given command
*
* @argv: The command & the flag
*/
void execut_command(char *argv[])
{
    pid_t child_pid;
    int status;

    child_pid = fork();
    if (child_pid == -1)
        return;
    if (child_pid == 0)
    {
        if (execve(argv[0], argv, NULL) == -1)
        {
            perror("Error");
        }
        wait(&status);
    }
    return;
}
