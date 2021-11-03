#include "3-calc.h"

/**
* main - fonction pour imprimer le résultat de l'opération
* @argc: le nombre d'argument
* @argv: les arguments
*
* Return: 0
* Error: 1
*/
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char diviseur;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	diviseur = *argv[2];

	if ((diviseur == '/' || diviseur == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(arg1, arg2);

	printf("%d\n", result);

	return (0);
}

