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
	if(i % 2 == 0)
	{
		for (i = 0; i < len/2; i++);
	}
	else
	{
		for (i = 0; i < (len - 1)/); i++);
	}
	for (i = i ;i < len; i++)
	{
		_putchar(str[i]);
	}
	
	_putchar('\n');
}
