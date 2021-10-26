#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - reset value pointer
 *
 * @size: taille
 * @c: chaine
 * Return: char*
 */
char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	pointer = (char *) malloc(sizeof(char) * size);

	if (pointer == NULL)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		*(pointer + i) = c;
	}

	*(pointer + i) = '\0';

	return (pointer);
}
