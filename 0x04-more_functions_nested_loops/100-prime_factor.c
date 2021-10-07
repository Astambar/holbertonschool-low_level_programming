#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int number = 612852475143, i, facteur;

	for (i = 2; i <= number; i++)
	{
		while ((number % i) == 0)
		{
			number /= i;
			facteur = i;
		}

	}
	printf("%ld\n", facteur);

	return (0);
}
