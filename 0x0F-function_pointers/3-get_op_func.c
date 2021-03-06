#include "3-calc.h"

/**
 * get_op_func - pointeur de fonction qui sélectionne la fonction à exécuter
 * @s: l'opérateur donnée par l'utilisateur
 *
 * Return: ceci retourne la fonction  correspondant à l'opérateur cible
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
