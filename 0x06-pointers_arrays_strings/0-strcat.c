#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* _atoi - reset value pointer
* 
* Return: Always 0.
* @s: pointer
*/
char *_strcat(char *dest, char *src)
{
int i;
for (i = 0 ; *src != '\0' && *dest != '\0'; i++)
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
