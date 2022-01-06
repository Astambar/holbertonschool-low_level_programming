#include "lists.h"

/**
 * add_dnodeint- ajout d'un nouveau noeud
 * @head: pointer vers la liste d'objet
 * @n: integer
 * Return: le nouveau nombre de noeud
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add_node = malloc(sizeof(dlistint_t));

	if (!add_node)
		return (NULL);

	add_node->n = n;
	if (!*head)
	{
		*head = add_node;
		return (add_node);
	}

	(*head)->prev = add_node;
	add_node->next = *head;
	*head = add_node;
	return (add_node);

}

