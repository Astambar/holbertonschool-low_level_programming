/**
 * int_index - ma fonction de teste d'index
 * @array: mon tableau
 * @size:	la taille du tableau
 * @cmp: ma fonction
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
		for (i = 0; i < size; i++)
			if ((*cmp)(array[i]) != 0)
				return (i);
	return (-1);
}
