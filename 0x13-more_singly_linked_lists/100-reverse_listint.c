#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - Reverse a linked list.
 * @head: Linked list.
 * Return: Inverse linked list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *temp;

	if (!*head)
		return (NULL);
	for ((*current).next, temp = current->next, current->next = temp->next)
	{
		(*temp).next = *head;
		*head = temp;
	}

	return (*head);
}
