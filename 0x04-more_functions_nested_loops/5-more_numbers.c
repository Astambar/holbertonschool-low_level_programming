#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code.
 * @c: - verif uppercase
 * Return: Always 0.
 */

void more_numbers(void)
{
int i = -1, dizaine = 0 , total = 0, a = 0;

	while(a++ < 10)
	{
		i = -1;
		dizaine = 0;
		total = 0;
		while (i++ < 10 && total++ < 14)
		{
			if(i == 10)
			{
				dizaine++;
				i = 0;
			}
			if(total != 2 && total != 4)
			{
				if(dizaine > 0)
				{
					_putchar(dizaine+48);
				}
					_putchar(i+48);
			}
		}
	_putchar('\n');
	}

}
