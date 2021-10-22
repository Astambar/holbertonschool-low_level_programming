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
	int result = 0, i, j, k = 1, num;

	if ((argc - 1) == 0)
	{
	return (printf("%d test\n", 1));
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		num = _atoi(argv[k]);
		if (num >= 0)
		{
			result += num;
		}
	}
	printf("%d\n", result);
	return (0);
}
