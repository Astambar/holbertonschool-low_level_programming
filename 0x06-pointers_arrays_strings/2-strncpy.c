#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* *_strncpy - reset value pointer
* 
* Return: Always 0.
* @s: pointer
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
