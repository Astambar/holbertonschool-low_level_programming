#include "lists.h"

/**
 * get_dnodeint_at_index - trouve un nœud spécifique d'une liste chaînée
 * @head: pointer vers la liste chaînée
 * @index: index du noeud à récupérer
 *
 * Return: Null en cas d'erreur sinon retourne le noeud indexée
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	if (index == 0)
		return (head);
	for (; i < index; head = (*head).next, i++)
		if (!(*head).next)
			return (NULL);
	return (head);
}
