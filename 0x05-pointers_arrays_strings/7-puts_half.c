#include "main.h"
#include <string.h> 
#include <stdio.h>
/**
* _strlen - reset value pointer
* @s: pointer
*/
void puts_half(char *str)
{
	int i, len;  
    len = strlen(str);
	if(!(len % 2 == 0))
	{
		len -= 1 ;
	}
	for (i = 0; i < len/2; i++);
	for (i = i+1 ;i <= len; i++)
	{
		_putchar(str[i]);
	}
	
	_putchar('\n');
}
