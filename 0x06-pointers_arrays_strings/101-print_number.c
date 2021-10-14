#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* print_number - reset value pointer
*
* Return: Always 0.
* @n: pointer
*/

void print_number(int n)
{
	unsigned int number_traitement;

	if (n < 0)
	{
		number_traitement = -n;
		_putchar('-');
	} else
	{
		number_traitement = n;
	}

	if (number_traitement / 10)
	{
		print_number(number_traitement / 10);
	}

	_putchar((number_traitement % 10) + '0');
}
