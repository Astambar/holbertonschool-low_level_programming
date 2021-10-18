#include "main.h"

/**
* *_strchr - reset value pointer
*
* Return: Always 0.
* @s: pointer
* @c: pointer
*/
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);

	return (NULL);
}
