#include "main.h"

/**
* _strlen - reset value pointer
* @s: pointer
*/
void _puts(char *str)
{
	int i;
	for (i = 0 ; str[i]!='\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	
}
