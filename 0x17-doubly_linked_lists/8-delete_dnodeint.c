#include "lists.h"

/**
 * delete_dnodeint_at_index - supprime tout les noeud à l'index donnée
 * @head: pointer sur la liste chaînée
 * @index: index où supprimer les noeuds
 *
 * Return: 1 en cas de succés et -1 en cas d'échec
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (!head)
		return (-1);
	if (!*head)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*current).next;
		if ((*current).next)
			(*(*current).next).prev = NULL;
		free(current);
		return (1);
	}

	for (; i < index; current = (*current).next, i++)
		if (!(*current).next)
			return (-1);
	(*(*current).prev).next = (*current).next;
	if ((*current).next)
		(*(*current).next).prev = (*current).prev;
	free(current);
	return (1);
}
