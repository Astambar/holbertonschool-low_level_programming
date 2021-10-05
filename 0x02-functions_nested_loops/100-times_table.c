#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */

 void print_times_table(int a)
 {
     	int i, j;

	if (a <= 98)
	{
		for (i = a; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	} else if (a >= 98)
	{
		for (j = a; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
 }