#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* *_strcat - reset value pointer
* 
* Return: Always 0.
* @s: pointer
*/
char *_strcat(char *dest, char *src)
{

while (*src != '\0' && *dest != '\0')
{
	if(*dest != '\0')
	{
		dest++;
	}
	else if (*src != '\0')
	{
		*dest = *src  ;
		dest++;
		src++;
	}

}
*dest = '\0';

return (dest);

}
