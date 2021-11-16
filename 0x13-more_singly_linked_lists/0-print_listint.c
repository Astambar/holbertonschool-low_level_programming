#include "lists.h"

/**
 *print_listint - a function that prints all the elements of a listint_t list.
 *@h: linked list
 * Return: number of nodes in linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	for (; h; i++, h = (*h).next)
		printf("%d\n", (*h).n);
	return (i);
}
