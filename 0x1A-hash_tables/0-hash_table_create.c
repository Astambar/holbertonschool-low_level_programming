#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: size of it
 * Return: ptr to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (size > 0)
	{
		new = malloc(sizeof(hash_table_t));
		if (new == NULL)
			return (NULL);

		new->size = size;
		new->array = malloc(sizeof(hash_node_t *) * size);
		if (new->array == NULL)
		{
			free(new);
			return (NULL);
		}
		else
			return (new);
	}
	else
		return (NULL);
}
