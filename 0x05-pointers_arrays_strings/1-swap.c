#include "main.h"
#include <stdio.h>
/**
* reset_to_98 - reset value pointer
* @a: pointer
* @b: pointer
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
