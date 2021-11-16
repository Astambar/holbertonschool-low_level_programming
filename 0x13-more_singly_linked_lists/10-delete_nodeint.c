#include "lists.h"

/**
 *delete_nodeint_at_index - a function that deletes the node at index index
 *of a listint_t linked list.
 *@head: pointer to linkend list
 *@index: is the index of the node that should be deleted.
 *Return: Returns: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i = 0;

	temp = *head;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1; i++, temp = (*temp).next)
		if (!(*temp).next)
			return (-1);

	temp2 = (*temp).next;
	(*temp).next = (*temp2).next;
	free(temp2);
	return (1);
}
