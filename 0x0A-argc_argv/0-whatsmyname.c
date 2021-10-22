#include <stdio.h>
/**
 * main - name file
 * @argc: The character to print
 *  @argv: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(int argc __attribute__((unused)), char *argv[])
		{
		printf("%s\n", argv[0]);
		return (0);
		}
