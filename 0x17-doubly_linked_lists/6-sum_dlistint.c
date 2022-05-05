#include "lists.h"

/**
 * sum_dlistint - somme de toute les valeur de la liste chaînée
 * @head: pointer vers la liste chaînée
 *
 * Return: la somme de tout les element de la liste chaînée
 * ou 0 si la liste est vide
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	for (; head; result += (*head).n, head = (*head).next)
	;
	return (result);
}
