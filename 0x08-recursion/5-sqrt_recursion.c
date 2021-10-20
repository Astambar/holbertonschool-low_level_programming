#include "main.h"
#include <stdlib.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{	
	return (n < 0 ? -1 : calcul_sqrt_recursion(n, 0));
}

/**
 * calul_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int calcul_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	return (i * i == n) ? i : calcul_sqrt_recursion(n, i + 1);
}

