#include "lists.h"

/**
 * add_dnodeint_end- - ajoute un nœud à la fin d'une liste chaînée
 * @head: pointer vers la liste chaînée
 * @n: valeur à ajouter au nouveau noeud
 * Return: pointeur vers le nouveau nœud, ou NULL en cas d'échec
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
