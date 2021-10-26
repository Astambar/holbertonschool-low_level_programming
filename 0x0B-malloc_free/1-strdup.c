#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *create_array - prints buffer in hexa
 * @c: char
 * @size: the size of the memory to print
 * Return: Nothing.
 */
char *_strdup(char *str)
{
    unsigned int i;
    char *result;

	if (str == NULL)
	{
		return (NULL);
	}
	for(i = 0; str[i] != '\0'; i++)
	{
	}
	result = malloc(sizeof(char) * (i + 1));
	if(result == NULL)
	{
		return NULL;
	}
    for (i = 0; (result[i] = str[i]) != '\0'; i++)
	{
	}

    return result;
}
