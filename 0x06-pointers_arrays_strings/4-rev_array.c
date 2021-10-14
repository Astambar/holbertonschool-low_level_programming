#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* reverse_array - reset value pointer
*
* Return: Always 0.
* @a: pointer
* @n: pointer
*/
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}

