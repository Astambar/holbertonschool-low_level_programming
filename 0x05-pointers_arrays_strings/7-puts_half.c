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
	for (i = 0; i < len/2; i++);
	for (i = i; str[i] != '\0'; i++)
	{
		_putchar(str[i - 1]);
	}
	
	_putchar('\n');
}
