#include "lists.h"

/**
 *
 *
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	if (!h)
	{
		return (0);
	}
	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}
