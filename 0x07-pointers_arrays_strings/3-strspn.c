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
	int i, j, match, temp = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
		if(s[i] == accept[j])
		{
			match = 1;
			break;
		}
		else
		{
			match = 0;
		}
		}
		if (match == 0)
		{
			if((i - temp) >= temp)
			{
				temp = i - temp;
			}
		}
	}
	return (temp);
}
