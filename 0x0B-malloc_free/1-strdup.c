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
    int len = strlen(str), i;
    char *result = malloc(len + 1);
	if (str == NULL)
	{
		return (NULL);
	}

    for (i = 0; i <= len; i++)
        result[i] = str[i];
    return result;
}
