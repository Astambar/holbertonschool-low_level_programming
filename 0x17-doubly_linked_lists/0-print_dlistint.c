#include "lists.h"

/**
 * print_dlistint- imprime les elements de la liste
 * @h: pointer de la list
 * Return: Le nombre de noeud
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	for (; h; h = h->next, i++)
		printf("%d\n", h->n);
	return (i);
}
