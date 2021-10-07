#include "main.h"
#include <stdio.h>

/**
 * more_numbers - check the code.
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i = 0, j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
		if (j >= 10)
		{
			_putchar(j / 10 + '0');
		}
			_putchar(j % 10 + '0');


		}
		_putchar('\n');
	}
}
