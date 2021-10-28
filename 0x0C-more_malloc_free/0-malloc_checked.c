#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the code
 *@b: valeur allocation
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *variable_allocation_memory;

	variable_allocation_memory = malloc(b);

	if (variable_allocation_memory == NULL)
		exit(98);
	return (variable_allocation_memory);
}
