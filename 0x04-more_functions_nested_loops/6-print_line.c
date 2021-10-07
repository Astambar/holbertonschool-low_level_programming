#include "main.h"
#include <stdio.h>

/**
 * print_line - check the code.
 * @n: - verif uppercase
 * Return: Always 0.
 */

void print_line(int n)
{
	int i = 0;

	while (i++ < n)
	{
		_putchar('_');
	}
	_putchar('\n');
}
