#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* *_strstr - reset value pointer
*
* Return: Always 0.
* @haystack: pointer
* @needle: pointer
*/
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sumtop, sumbottom;

	sumtop = 0;
	sumbottom = 0;

	for (i = 0; i < size; i++)
	{
		sumtop += a[(size * i) + i];
		sumbottom += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sumtop, sumbottom);
}
