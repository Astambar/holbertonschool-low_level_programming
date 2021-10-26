#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - prints buffer in hexa
 * @str: char
 * Return: Nothing.
 */
char *_strdup(char *str)
{
    unsigned int len = strlen(str), i;
    char *result = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
	{
		return (NULL);
	}

    for (i = 0; i <= len; i++)
	{
		result[i] = str[i];
	}

	return (result == NULL) ?  NULL : result;
}
