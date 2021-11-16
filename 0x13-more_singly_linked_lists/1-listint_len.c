#include "lists.h"

/**
 *listint_len -  a function that returns the number of elements in a linked
 * listint_t list.
 *@h: Linked list
 *Return: Number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	for (;h; i++, h = (*h).next)
		;
	return (i);
}
