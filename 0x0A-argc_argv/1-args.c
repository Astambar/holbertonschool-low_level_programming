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
		printf("%d\n", argc - 1);

	return (0);
}
