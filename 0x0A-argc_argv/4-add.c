#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - name file
 * @argc: The character to print
 *  @argv: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(int argc, char **argv)
{
	int i, sum, total;

	sum = 0;
	if (argc < 1)
		printf("%d\n", 0);
	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		total = atoi(argv[argc]);
		sum += total;
	}
	printf("%d\n", sum);
	return (0);
}
