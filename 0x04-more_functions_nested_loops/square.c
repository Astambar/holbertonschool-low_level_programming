#include "main.h"


void print_square(int size)
{
	int hauteur, largeur;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (hauteur = 0 ; hauteur < size; hauteur++)
		{
			for (largeur = 0; largeur < size; largeur++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}