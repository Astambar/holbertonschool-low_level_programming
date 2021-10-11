#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* puts_half - reset value pointer
* @str: pointer
*/
	void puts_half(char *str)
	{
		int i, len, len1;

		len = strlen(str);

		if (!(len % 2 == 0))
		{
			len1 = (len - 1) / 2;

			for (i = len1 + 1; i < len; i++)
			{
			_putchar(str[i]);
			}
		}
		else
		{
			len1 = len / 2;

			for (i = len1 ; i < len; i++)
			{
			_putchar(str[i]);
			}
		}


		_putchar('\n');
	}
