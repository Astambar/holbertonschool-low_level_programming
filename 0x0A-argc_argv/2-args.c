#include <stdio.h>
/**
 * main - name file
 * @argc: The character to print
 *  @argv: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */



int main(int argc, char *argv[]__attribute__((unused)))
{
	int i;

		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	return (0);
}
