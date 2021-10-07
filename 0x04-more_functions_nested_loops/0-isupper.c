#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code.
 * @c: - verif uppercase
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (65 <= c && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
