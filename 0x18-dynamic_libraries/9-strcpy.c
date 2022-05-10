#include <string.h>
#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = strlen(src);

	for (i = 0; i < len ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
