#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: list
 * @index: value
 * Return: nn
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nn;
	register uint a = 0;

	nn = head;
	while (nn)
	{
		if (nn == index)
		{
			return (nn);
		}
		a++;
		nn = nn->next;
	}
	return (nn);
}
