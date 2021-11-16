#include "lists.h"

/**
 *get_nodeint_at_index - a function that returns the nth node of a
 *listint_t linked list.
 *@head: linkend list
 *@index: is the index of the node
 *Return: returns the nth node of a listint_t linked list.
 *if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;

	if (head == NULL)
		return (NULL);

	for (counter = 0; counter < index && head != NULL; counter++)
	{
		head = (*head).next;
	}

	if (counter == index)
		return (head);

	return (NULL);
}
