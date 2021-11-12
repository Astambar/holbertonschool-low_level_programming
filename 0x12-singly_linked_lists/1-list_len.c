#include "lists.h"
/**
 * list_len - compte le nombre d'élement contenue dans la liste chaîné
 * @h: list à imprimer
 * Description:  compte le nombre  d'élément présent dans la liste chaîné.
 * Return: le nombre  d'élément
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	for (; h; i++, h = h->next)
	;
	return (i);
}
