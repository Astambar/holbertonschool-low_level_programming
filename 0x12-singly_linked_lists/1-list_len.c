#include "lists.h"
/**
 * list_len - compte le nombre d'élement contenue dans la liste chaîné
 * @h: list to print
 * Description:  number of elements in a linked list_t list.
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	for (; h; i++, h = h->next)
	;

	return (i);
}
