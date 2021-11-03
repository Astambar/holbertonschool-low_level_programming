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
	int (*result)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	result = get_op_func(argv[2]);

	if (!result || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", result(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
