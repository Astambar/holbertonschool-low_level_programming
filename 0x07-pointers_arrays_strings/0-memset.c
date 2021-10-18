#include "main.h"

/**
* *_strcat - reset value pointer
*
* Return: Always 0.
* @dest: pointer
* @src: pointer
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
