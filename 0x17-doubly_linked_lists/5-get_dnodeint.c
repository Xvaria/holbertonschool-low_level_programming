#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: structure
 * @index: node
 * Return: nn or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nn;
	unsigned int a = 0;

	while (a < index)
	{
		nn = head->next;
		if (!nn)
			return (NULL);
		head = nn;
		a++;
	}
	return (nn);
}
