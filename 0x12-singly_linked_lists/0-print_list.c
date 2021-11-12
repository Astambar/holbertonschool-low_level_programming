#include "lists.h"
/**
 * print_list - imprime les élément connecté au noeud
 * @h: liste des élément à imprimer
 * Description: imprime les élément de la liste
 * Return: nombre de noeud
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	for (; h; i++, h = h->next)
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
	return (i);
}
