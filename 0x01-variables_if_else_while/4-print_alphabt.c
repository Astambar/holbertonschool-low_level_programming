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
	int c = 'a';

	while (c <= 'z')
	{
	if ((c != 'q') && (c != 'e'))
	{
		putchar(c);
	}
	c++;
	}

	putchar('\n');
	return (0);
}
