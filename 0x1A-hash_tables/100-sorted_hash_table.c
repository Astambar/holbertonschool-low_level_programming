#include "hash_tables.h"

/**
* shash_table_create - Crée une table de hachage
*
* @size: La taille de la table de hachage
*
* Return: pointeur vers la table de hachage
*/

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;
	ht->array = calloc(ht->size, sizeof(shash_node_t));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}

/**
* shash_table_print_rev - Imprime la table de shash dans rev
*
* @ht: pointeur vers la table de shash
*
* Return: n'importe quoi, cause la fonction void
*/

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *rev_tmp;
	int j = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	rev_tmp = ht->stail;
	printf("{");
	while (rev_tmp != NULL)
	{
		if (j != 0)
			printf(", ");
		printf("'%s': '%s'", rev_tmp->key, rev_tmp->value);
		rev_tmp = rev_tmp->sprev;
		j++;
	}
	printf("}\n");
}

/**
* shash_table_print - Imprime la table de shash
*
* @ht: pointeur vers la table de shash
*
* Return: n'importe quoi, cause la fonction void
*/

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	int j = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	tmp = ht->shead;
	printf("{");
	while (tmp != NULL)
	{
		if (j != 0)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->snext;
		j++;
	}
	printf("}\n");
}

/**
* node_sorted_by_hash_key - Ajouter le nœud à la liste chaînée triée
*
* @ht : pointeur vers la table de hachage
* @node : Nœud à remplir dans le ll
*
* Return: n'importe quoi, cause la fonction void
*/

void node_sorted_by_hash_key(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *tmp;

	if (ht->shead == NULL && ht->stail == NULL)
	{
		ht->shead = ht->stail = node;
		return;
	}
	for (tmp = ht->shead; tmp != NULL; tmp = tmp->snext)
		if (strcmp(node->key, tmp->key) < 0)
		{
			node->snext = tmp;
			node->sprev = tmp->sprev;
			tmp->sprev = node;
			if (node->sprev)
				node->sprev->snext = node;
			else
				ht->shead = node;
			return;
		}
	node->sprev = ht->stail;
	ht->stail->snext = node;
	ht->stail = node;
}

/**
* shash_table_set - Définissez la clé et la valeur dans la table de shash
*
* @ht : pointeur vers la table de hachage
* @key : Clé à remplir
* @value : Valeur à renseigner
*
* Return: 1 si succès, 0 sinon
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *head;
	shash_node_t *new_node = NULL;

	if (!ht || !ht->array || ht->size == 0 || !key ||
		strcmp(key, "") == 0 || !value)
		return (0);
	for (head = ht->array[index],
	index = key_index((const unsigned char *)key, ht->size); head; head = head->next)
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			if (head->value == NULL)
				return (0);
			return (1);
		}
	new_node = create_node(key, value);
	if (!new_node)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	node_sorted_by_hash_key(ht, new_node);
	return (1);
}

/**
* create_node - crée un nœud
*
* @key : La clé du nœud
* @value : La valeur de la clé
*
* Return: le nœud, NULL en cas de problème
*/

shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *new_node = malloc(sizeof(shash_node_t));

	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->snext = NULL;
	new_node->sprev = NULL;
	new_node->next = NULL;
	return (new_node);
}

/**
* shash_table_delete - Supprime la table de hachage
*
* @ht: pointeur vers la table de hachage
*
* Return: n'importe quoi, cause la fonction void
*/
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *head, *tmp;

	if (!ht || !ht->array)
		return;
	if (ht->size == 0)
	{
		free(ht->array);
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		for (head = ht->array[i]; head; tmp = head, head = head->next, free(tmp->key),
		free(tmp->value), free(tmp))
		;
	}
	free(ht->array);
	free(ht);
}

/**
* shash_table_get - Récupère le contenu d'une clé dans le hachage
*
* @ht: La clé donnée
* @key: La clé donnée pour obtenir la valeur
*
* Return: La valeur
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *head;

	if (!ht || !ht->array || ht->size == 0 || !key ||
		strcmp(key, "") == 0)
		return (NULL);


	for (index = key_index((const unsigned char *)key, ht->size)
	head = ht->array[index]; head; head = head->next)
		if (strcmp(head->key, key) == 0)
			return (head->value);
	return (NULL);
}
