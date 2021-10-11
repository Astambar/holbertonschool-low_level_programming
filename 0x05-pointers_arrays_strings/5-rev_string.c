#include "main.h"

/**
* _strlen - reset value pointer
* @s: pointer
*/
void rev_string(char *s)
{
	int i,j=0;

	for (i = 0 ; s[i]!='\0'; i++);

	for (i = i; i != 0; i--)
	{
		*s[j]=s[i - 1]
		j++;
	}
	return (*s);
	
}
