#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strspn - reset value pointer
*
* Return: Always 0.
* @s: pointer
* @accept: pointer
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, temp, match;

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

}
