#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: list
 * Return: a or 0
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	if (!h)
	{
		return (0);
	}
	while (h)
	{
		if (h->n)
			a++;
		h = h->next;
	}
	return (a);
}
