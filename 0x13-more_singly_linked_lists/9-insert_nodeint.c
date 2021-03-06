#include "lists.h"
/**
 *insert_nodeint_at_index - function that inserts a new
*node at a given position
 *@head: Pointer to linkend list
 *@idx: is the index of the list where the new node should be added
 *@n: New node content
 *Return: the address of the new node, or NULL if it failed
 *if it is not possible to add the new node at index idx, do not add the new
*node and return NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i = 0;

	temp = *head;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	(*new_node).n = n;

	if (idx == 0)
	{
		(*new_node).next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		temp = (*temp).next;
		if (!temp)
			return (NULL);
	}
	(*new_node).next = (*temp).next;
	(*temp).next = new_node;
	return (new_node);
}
