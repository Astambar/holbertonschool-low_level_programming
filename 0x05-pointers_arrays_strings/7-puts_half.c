#include "main.h"
#include <string.h> 
#include <stdio.h>
/**
* _strlen - reset value pointer
* @s: pointer
*/
void puts_half(char *str)
{
	int i, len, len1;  
    len = strlen(str);
	if(!(len % 2 == 0))
	{
		len1 =(len - 1) / 2 ;
	}
	else
	{
		len1 =len / 2 ;
	}
	for (i = len1 ;i <= len; i++)
	{
		_putchar(str[i]);
	}
	
	_putchar('\n');
}
