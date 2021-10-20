#include "main.h"

/**
* _puts_recursion - reset value pointer
*
* Return: Always 0.
* @s: pointer
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
