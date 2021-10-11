#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* *_strcpy - reset value pointer
* Return: Always 0.
* @dest: pointer
* @src: pointer
*/
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = strlen(src);

	for (i = 0; i < len ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
