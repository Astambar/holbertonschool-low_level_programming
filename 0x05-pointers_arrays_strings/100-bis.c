#include "holberton.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, count_negative_symbol, result, len, f, digit;

	count_negative_symbol = 0;
	result = 0;
	f = 0;
	digit = 0;

	for (len = 0; s[len] != '\0'; len ++)
	{
		len++;
	}
	
	for (i = 0;i < len && f == 0; i++)
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

	if (f == 0)
	{
		return (0);
	}

	return (n);
}
