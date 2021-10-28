#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
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
