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
	dlistint_t *new = NULL;
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
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;
		tmp->prev->next = new;
		new->next = tmp;
		new->prev = tmp->prev;
		tmp->prev = new;
	}
	return (new);
}
