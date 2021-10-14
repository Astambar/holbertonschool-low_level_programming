#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* *_strncat - reset value pointer
* Return: Always 0.
* @dest: pointer
* @src: pointer
* @n: n est la longueur max d'élément à  implémenter en octet
*/
char *_strncat(char *dest, char *src, int n)
{

	int dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';


return (dest);

}
