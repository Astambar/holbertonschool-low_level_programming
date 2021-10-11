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
	for (i = len; i > len/2; i--)  
    {  
			_putchar(str[i]);
	}
	_putchar('\n');
}
