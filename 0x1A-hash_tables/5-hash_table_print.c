#include "hash_tables.h"
/**
 * hash_table_print - imprime la table de hashage
 * @ht: la table de hashage
 * Return: Rien.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int i = 0;
	char *new = ", ", *space = "";

	if (ht == NULL)
		return;
	if (ht != NULL)
	{
		printf("{");
		for (; i < ht->size; i++)
		{
			temp = ht->array[i];
			for (;temp; space = new, temp = temp->next)
			{
				printf("%s", space);
				printf("'%s': '%s'", temp->key, temp->value);
			}
		}
		printf("}\n");
	}
}
