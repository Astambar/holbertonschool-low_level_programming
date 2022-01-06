#include "lists.h"


/**
* insert_dnodeint_at_index - Insert un nouveau noeud à l'index donnée
*
* @h: pointer vers la liste
* @idx: la position cible
* @n: la valeur à ajouter au noeud
*
* Return: pointer vers le noeud à créer
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *add_node = NULL;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (i < idx && tmp->next != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	if (tmp->next == NULL && i == idx - 1)
		return (add_dnodeint_end(h, n));
	else if (i == idx)
	{
		add_node = malloc(sizeof(dlistint_t));
		if (!add_node)
			return (NULL);
		add_node->n = n;
		tmp->prev->next = add_node;
		add_node->next = tmp;
		add_node->prev = tmp->prev;
		tmp->prev = add_node;
	}
	return (add_node);
}
