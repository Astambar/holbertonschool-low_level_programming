#include "variadic_functions.h"
/**
 *print_all - affiche tout type d'argument disponible
 *@format: constant
 *Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list list_print;
	char *string;

	va_start(list_print, format);

	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(list_print, int));
			break;
			case 'i':
				printf("%d", va_arg(list_print, int));
			break;
			case 'f':
				printf("%f", (float)va_arg(list_print, double));
			break;
			case 's':
				string = va_arg(list_print, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
			break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}
	printf("\n");
	va_end(list_print);
}
