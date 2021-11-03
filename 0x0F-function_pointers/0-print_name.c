#include "function_pointers.h"
/**
 * print_name - imprime le  nom
 *
 * @name: pointer vers le  nom
 * @f: pointer vers fonction de type void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!(name || f))
		return;
	(*f)(name);
}
