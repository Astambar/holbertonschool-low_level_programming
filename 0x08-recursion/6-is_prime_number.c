#include "main.h"


/**
 * is_prime_number - nombre premier
 * @n: nombre tester
 *
 * Return: 1 si un nombre est premier, 0 sinon
 */
int is_prime_number(int n)
{
	return (n <= 1) ? 0 : actual_prime(n, n - 1);
}

/**
 * actual_prime - 
 * @n: nombre tester
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	return ((n % i == 0 && i > 0) ? 0 : actual_prime(n, i - 1));
}
