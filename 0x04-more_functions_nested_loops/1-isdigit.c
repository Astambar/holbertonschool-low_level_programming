#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check the code.
 * @c: - verif uppercase
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (0 <= c || 9 >= c)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
