#include "lists.h"

/**
 * print_dlistint- compte le nombre d'element de la liste
 * @h: pointer de la list
 * Return: Le nombre d'element de la liste
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	for (;h; h = h->next, i++)
	;
	return (i);
}
