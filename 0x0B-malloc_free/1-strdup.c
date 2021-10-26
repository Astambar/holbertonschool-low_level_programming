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

	char *dup;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);

}
