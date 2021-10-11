#include "main.h"
#include <string.h> 
#include <stdio.h>
/**
* _strlen - reset value pointer
* @s: pointer
*/
char *_strcpy(char *dest, char *src)
{	
	int i, len;
	len = strlen(src);
	for (i = 0; i < len ;i++)
	{
		*dest = src;
	}
	return (dest);
}
