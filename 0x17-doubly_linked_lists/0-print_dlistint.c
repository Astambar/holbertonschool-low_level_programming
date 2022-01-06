#include "lists.h"


/**
 * print_dlistint- prints elements of a list
 * @h: pointer to list object
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	for (;h; h = h->next, i++)
		printf("%d\n", h->n);
	return (i);
}