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
	int f = 48;

	while (c < 58)
	{
		if (c < 58)
		{
			while (f < 57)
			{
				putchar(c);
				putchar(f);
				if (f != 57)
				{
					putchar(',');
					putchar(' ');
				}
				f++;
			}
		}
		f = 48;
		c++;
	}
	putchar('\n');
	return (0);
}
