#include "main.h"

/**
* _strlen_recursion - reset value pointer
*
* Return: Always 0.
* @s: pointer
*/

int _strlen_recursion(char *s)
{
	static int i;

	i = 0;

	if (*s)
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i);
}
