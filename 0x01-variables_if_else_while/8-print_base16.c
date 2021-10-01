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
	int h = 97;

	while (c <= 58)
	{
		putchar(c);
		c++;
	}
	while (h <= 102)
	{
		putchar(h);
		h++;
	}
	putchar('\n');
	return (0);
}
