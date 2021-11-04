#include "variadic_functions.h"

/**
 * sum_them_all - calcul la somme de tout les paramettres
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int somme = 0;
	va_list list_number;

	va_start(list_number, n);
	for (i = 0; i < n; i++)
		somme += va_arg(list_number, int);
	va_end(list_number);
	return (somme);
}
