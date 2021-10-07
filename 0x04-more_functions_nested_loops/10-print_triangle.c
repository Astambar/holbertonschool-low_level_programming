#include "main.h"

/**
 * print_triangle - check the code.
 * @size: - verif uppercase
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int largeur, espace, i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (largeur = 0 ; largeur < size; largeur++)
		{
			espace = size - largeur;

			for (i = 0 ; i < espace - 1; i++)
			{
				_putchar(' ');
			}

			for (j = 0 ; j <= largeur; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
