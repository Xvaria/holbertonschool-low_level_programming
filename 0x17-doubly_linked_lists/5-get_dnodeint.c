#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: structure
 * @index: node
 * Return: nn or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nn, *nc;
	unsigned int a = 0, i = 0;

	nn = head;
	if (nn)
	{
		nc = head;
		while (nc)
		{
			i++;
			nc = nc->next;
		}
		if (index > i)
			return (NULL);
		while (a < index)
		{
			nn = nn->next;
			a++;
		}
	}
	return (nn);
}
