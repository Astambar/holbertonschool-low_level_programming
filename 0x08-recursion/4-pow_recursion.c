#include "main.h"

/**
* _pow_recursion - puissance
*
* Return: Always 0.
* @x: nombre
* @y: puissance
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return ((y == 0) ? 1 : (x * _pow_recursion(x, y - 1)));
}
