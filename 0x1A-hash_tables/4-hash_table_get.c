#include "hash_tables.h"
/**
 * hash_table_get - the value a key
 * @ht: hash table
 * @key: the key
 * Return: the value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new_table = NULL;
	unsigned long int index = 0;

	if (strlen(key) == 0)
		return (NULL);

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	new_table = ht->array[index];

	for (; new_table; new_table = new_table->next)
		if (strcmp(new_table->key, key) == 0)
			return (new_table->value);
	return (NULL);
}
