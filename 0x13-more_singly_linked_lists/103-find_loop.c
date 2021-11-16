#include "lists.h"
#include <stdlib.h>
/**
 * find_listint_loop - Checks for infinite loops.
 * @head: Linked list.
 * Return: Address where infinite loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_p, *fast_p;

	if (!head || !(*head).next)
		return (NULL);
	slow_p = (*head).next;
	fast_p = (*(*head).next).next;
	for (; fast_p; slow_p = (*slow_p).next, fast_p = (*(*fast_p).next).next)
	{
		if (slow_p == fast_p)
		{
			slow_p = head;
			for (; slow_p != fast_p; slow_p = (*slow_p).next, fast_p = (*fast_p).next)
			;
			return (slow_p);
		}
	}

	return (NULL);
}
