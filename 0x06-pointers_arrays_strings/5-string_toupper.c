#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* *string_toupper - reset value pointer
*
* Return: Always 0.
* @tl: pointer
*/
char *string_toupper(char *tl)
{
	int i;

	for (i = 0; tl[i]; i++)
	{
		if ((tl[i] >= 'a') && (tl[i] <= 'z'))
		{
			tl[i] += ('A' - 'a');
		}
	}
	return (tl);
}
