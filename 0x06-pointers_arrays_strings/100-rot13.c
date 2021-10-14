#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* *rot13 - reset value pointer
*
* Return: Always 0.
* @s: pointer
*/

char *rot13(char *s)
{
int i, j;
char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; alphabet[j] != '\0'; j++)
	{
		if (s[i] == alphabet[j])
		{
			s[i] = rot13[j];
			break;
		}
	}
}

	return (s);
}
