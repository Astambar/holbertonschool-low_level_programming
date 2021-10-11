#include "main.h"

/**
* _strlen - reset value pointer
* @s: pointer
*/
void print_rev(char *s)
{
	int i;
	for (i = 0 ; s[i]!='\0'; i++);

	for (i = i; i != 0; i--)
	{
		_putchar(s[i - 1]);
	}
	_putchar('\n');
	
}
