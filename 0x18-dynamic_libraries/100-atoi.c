#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* _atoi - reset value pointer
* Return: Always 0.
* @s: pointer
*/
int _atoi(char *s)
{
	int i, count_negative_symbol = 0, result = 0, f = 0, digit = 0;

	for (i = 0; s[i] != '\0' && f == 0; i++)
	{
		if (s[i] == '-')
		{
			count_negative_symbol++;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (count_negative_symbol % 2)
			{
				digit = -digit;
			}

			result = result * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			f = 0;
		}
	}

return ((f == 0) ? (0) : (result));

}
