#include "main.h"
#include <stdio.h>
/**
* swap_int - reset value pointer
* @a: pointer
* @b: pointer
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
