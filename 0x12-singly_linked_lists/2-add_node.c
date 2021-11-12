#include "lists.h"

/**
 * add_node - ajout d'un nouveau noeud
 * @head: Debut de la liste
 * @str: chaine à ajouter
 *
 * Return: head of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
