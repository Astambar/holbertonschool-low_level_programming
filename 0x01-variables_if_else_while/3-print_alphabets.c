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
	int doctor = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (doctor <= 'Z')
	{
		putchar(doctor);
		doctor++;
	}
	putchar ('\n');
	return (0);
}
