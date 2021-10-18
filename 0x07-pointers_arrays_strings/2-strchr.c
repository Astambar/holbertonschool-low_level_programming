#include "main.h"

/**
* *_strcat - reset value pointer
*
* Return: Always 0.
* @dest: pointer
* @src: pointer
*/
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		} 
	} while (*s++) ;

	return (NULL);
}
