#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - condition positive or negative or 0
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int c = 48;
	int f = 49;

	while (c < 57)
	{
		
			while (f < 58)
			{
				putchar(c);
				putchar(f);
				if (f != 57 && c != 56)
				{
					putchar(',');
					putchar(' ');
				}
				f++;
			}

		f = 48;
		c++;
	}
	putchar('\n');
	return (0);
}
