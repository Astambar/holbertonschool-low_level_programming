#include "main.h"

/**
* _puts_recursion - reset value pointer
*
* Return: Always 0.
* @s: pointer
*/

int _pow_recursion(int x, int y)
{
	if ( y < 0)
	{
		return (-1);
	}
	return ((y == 0) ? 1 : x * _pow_recursion(x, y-1));
}
