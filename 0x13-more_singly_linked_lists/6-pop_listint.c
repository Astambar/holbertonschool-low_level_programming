#include "lists.h"

/**
 *pop_listint - a function that deletes the head node of
 *a listint_t linked list
 *@head: pointer to linkend list
 *Return: if the linked list is empty return 0
 *else returns the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *next_node;

	if (!*head)
		return (0);

	next_node = (*head).next;
	n = (*head).n;
	free(*head);
	*head = next_node;

	return (n);
}