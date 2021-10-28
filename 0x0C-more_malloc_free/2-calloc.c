#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_memset - check the code
 *@string: chaine 1
 *@b: chaine 2
 *@n: taille allocation
 * Return: Always 0.
 */
char *_memset(char *string, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		string[i] = b;
	return (string);
}
/**
 * *_calloc - check the code
 *@nmemb: mem
 *@size: taille allocation
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *var_memory_allocation;

	if (nmemb == 0 || size == 0)
		return (NULL);
	var_memory_allocation = malloc(size * nmemb);
	if (var_memory_allocation == NULL)
		return (NULL);
	_memset(var_memory_allocation, 0, nmemb * size);
	return (var_memory_allocation);
}
