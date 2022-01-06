#include "lists.h"

/**
 * add_dnodeint_end- - ajoute un nœud à la fin d'une liste chaînée
 * @head: pointer vers la liste chaînée
 * @n: valeur à ajouter au nouveau noeud
 * Return: pointeur vers le nouveau nœud, ou NULL en cas d'échec
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add_node, *tmp;

	if (head == NULL)
		return (NULL);
	add_node = malloc(sizeof(dlistint_t));
	if (add_node == NULL)
		return (NULL);
	add_node->n = n;
	add_node->next = NULL;
	if (*head == NULL)
	{
		add_node->prev = NULL;
		*head = add_node;
		return (add_node);
	}
	tmp = *head;
	for (; (*tmp).next; tmp = (*tmp).next)
	;
	tmp->next = add_node;
	add_node->prev = tmp;
	return (add_node);
}
