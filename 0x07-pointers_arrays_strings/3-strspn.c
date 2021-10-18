#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* *_strcat - reset value pointer
*
* Return: Always 0.
* @dest: pointer
* @src: pointer
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, match;

	temp = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				temp++;
				match = 1;
			}
		}
		if (match == 0)
		{
			return (temp);
		}
	}

	return (0);
	