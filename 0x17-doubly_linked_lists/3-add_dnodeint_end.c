#include "lists.h"

/**
 * add_dnodeint- - ajoute un nœud à la fin d'une liste chaînée
 * @head: pointer vers la liste chaînée
 * @n: integer
 * Return: le nouveau nombre de noeud
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add_node, *tmp;

	if (!head)
		return (NULL);
	add_node = malloc(sizeof(dlistint_t));
	if (!add_node)
		return (NULL);

	(*add_node).n = n;
	(*add_node).next = NULL;

	if (!*head)
	{
		(*add_node).prev = NULL;
		*head = add_node;
		return (add_node);
	}
	tmp = *head;
	for (; (*tmp).next; tmp = (*tmp).next)
	;
	(*tmp).next = new;
	(*add_node).prev = tmp;
	return (add_node);
}