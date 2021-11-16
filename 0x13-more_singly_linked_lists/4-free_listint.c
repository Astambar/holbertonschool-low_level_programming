#include "lists.h"
/**
 *free_listint - a function that frees a list_t list.
 *@head: list
 *Return Void
 */

void free_listint(listint_t *head)
{
	listint_t *pointer;

	while (head != NULL)
	{
		pointer = head;
		head = head->next;
		free(pointer);
	}
}
