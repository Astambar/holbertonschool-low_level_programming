#include "lists.h"

/**
 * add_node_end - ajout d'un noeud en fins de chaînes
 * @head: le premier noeud
 * @str: chaîne à ajouter
 *
 * Return: le noeud ajouter ou NULL si cela ne réussi pas
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newEndNode, *temp;

	newEndNode = malloc(sizeof(list_t));
	temp = malloc(sizeof(list_t));
	if (!newEndNode || !temp)
	{
		free(newEndNode);
		free(temp);
		return (NULL);
	}
	(*newEndNode).str = strdup(str);
	(*newEndNode).len = strlen(str);
	if (*head == NULL)
	{
		*head = newEndNode;
	}
	else
	{
		temp = *head;
		for (; (*temp).next; temp = (*temp).next)
			;
		(*temp).next = newEndNode;
	}
	return (newEndNode);
}
