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
	int g = 50;

	while (c < 56)
	{
		while (f < 57)
		{

			while (g < 58)
			{
				if (c != g || c != f || f != g)
				{
					putchar(c);
					putchar(f);
					putchar(g);
					if (c != 55 || f != 56 || g != 57)
					{
						putchar(',');
						putchar(' ');
					}

				}

				g++;
			}
		g = 48;
		f++;
		}
		f = 48;
		c++;

	}
	putchar('\n');
	return (0);

}
