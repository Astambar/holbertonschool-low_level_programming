#include "main.h"
int traitement_prime(int n, int i);

/**
 * is_prime_number - nombre premier
 * @n: nombre tester
 *
 * Return: 1 si un nombre est premier, 0 sinon
 */
int is_prime_number(int n)
{
	return ((n <= 1) ? 0 : traitement_prime(n, n - 1));
}

/**
 * traitement_prime - traitement nombre premier
 * @n: nombre tester
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int traitement_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	return ((n % i == 0 && i > 0) ? 0 : traitement_prime(n, i - 1));
}
