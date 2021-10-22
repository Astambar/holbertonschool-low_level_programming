#include <stdio.h>
#include "100-atoi.c"

/**
 * main - name file
 * @argc: The character to print
 *  @argv: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(int argc, char *argv[]__attribute__((unused)))
{

	if ((argc - 1) == 2)
	{
		printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	}
	else
	{
		printf("Error");
	}
	return (0);
}
