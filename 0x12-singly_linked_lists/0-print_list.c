#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: list to print
 * Description: Print elements of a list.
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int n = 0;

	for (; h; n++, h = h->next)
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
	return (n);
}
