#include "variadic_functions.h"
/**
 *print_strings - affiche les chaine suivi d'un saut de ligne
 *@separator: le separateur de chaine
 *@n: nombre d'argument
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list_string;
	unsigned int i = 0;
	char *string;

	va_start(list_string, n);
	for (; i < n; i++)
	{
		string = va_arg(list_string, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if ((i != n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list_string);
}
