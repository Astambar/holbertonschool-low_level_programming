#include "lists.h"

/**
 *add_nodeint_end - a function that adds a new node at the end
 *of a list_t list.
 *@head: list
 *@n: new node content
 *Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	(*new_node).n = n;
	(*new_node).next = NULL;

	if (!*head)
		*head = new_node;
	else
	{
		last = *head;
		for (; (*last).next; last = (*last).next)
			;
		(*last).next = new_node;
	}
	return (new_node);
}
