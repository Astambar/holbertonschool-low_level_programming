#include "main.h"
#include <string.h> 
#include <stdio.h>
/**
* _strlen - reset value pointer
* @s: pointer
*/
char *_strcpy(char *dest, char *src)
{	
	int i;
	for (i = 0; src[i] != '\0';i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
