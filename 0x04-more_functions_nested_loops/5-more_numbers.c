#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code.
 * @c: - verif uppercase
 * Return: Always 0.
 */

void more_numbers(void)
{
int i = 0, j = 0;
while(j++ <10)
{
	while (i++ < 15)
	{	if(i != 2 && i != 4)
		{
			_putchar(i+47);
		}
	}
	_putchar('\n');
}


}
