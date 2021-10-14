#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* *leet - reset value pointer
*
* Return: Always 0.
* @s: pointer
*/

char *leet(char *s)
{
int i, j;
char *letter = "aAeEoOtTlL";
char *number = "4433OO7711";

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; letter[j] != '\0'; j++)
	{
		if (s[i] == letter[j])
		{
			s[i] = number[j];
		}
	}
}

	return (s);
}
