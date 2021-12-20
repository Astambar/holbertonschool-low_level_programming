#include <stdio.h>

/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
 extern char **environ;
int main(int ac, char **av, char **env)
{
        printf("%p\n", env);
        printf("%p\n", environ);
    return (0);
}
