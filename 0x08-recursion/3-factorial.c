#include "main.h"

/**
* factorial - reset value pointer
*
* Return: Always 0.
* @n: default
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return ((n == 0) ? 1 : (n * factorial(n - 1)));

}
