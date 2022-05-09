#include "main.h"

/**
* *_memset - reset value pointer
*
* Return: Always 0.
* @s: pointer
* @b: pointer
* @n: long
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
