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

	int c = 0, f = 0, a = 48;

	while (c < 100)
	{
		while (f < 100)
		{
			if (c < f)
			{
				putchar((c / 10) + 48);
				putchar((c % 10) + 48);
				putchar(' ');
				putchar((f / 10) + 48);
				putchar((f % 10) + 48);
				if (c != 98 || f != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			f++;
		}
		c++;
	}
	putchar('\n');
	return (0);

}
