#include "variadic_functions.h"

/**
 * print_numbers - affiche  les nombre de la liste
 * @separator: le séparateur des nombres
 * @n: le nombre de  int placer dans la fonction
 * @...: un nombre variable d'argument de type int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(nums);
}
