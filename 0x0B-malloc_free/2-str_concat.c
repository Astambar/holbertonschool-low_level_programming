#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - prints buffer in hexa
 * @str: char[]
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);

	if (s1)
	{
		for (i = 0 < len1; i++)
		{
			concat[i] = s1[i];
		}
	}

	if (s2)
	{
		for (i = 0; i < (len1 + len2); i++)
		{
			concat[i] = s2[j];
			j++;
		}
	}
	concat[i] = '\0';

	return (concat);
}