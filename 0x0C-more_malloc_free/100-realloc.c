#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - prints buffer in hexa
 * @ptr: the address of memory to print
 * @old_size: vieille taille
 * @new_size: nouvelle taille
 * Return: Nothing.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *string;

	if (new_size > old_size)
	{
		string = malloc(new_size);
		free(ptr);
		return (string);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		string = malloc(new_size);
		free(ptr);
		return (string);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
