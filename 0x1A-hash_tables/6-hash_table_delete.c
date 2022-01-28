#include "hash_tables.h"
/**
 * hash_table_delete - suppression de la table de hashage
 * @ht: table de hashage
 * Return: Rien.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int i = 0, j = 0;

	if (ht == NULL)
		return;
	if (ht != NULL)
	{
		for (; i < ht->size; i++)
		{
			temp = ht->array[i];
			for (; temp != NULL; j++)
			{
				free(new_temp->key);
				free(new_temp->value);
				temp = new_temp->next;
				free(ht->array[i]);
				ht->array[i] = temp;
			}
		}
		free(ht->array);
		free(ht);
	}
}
