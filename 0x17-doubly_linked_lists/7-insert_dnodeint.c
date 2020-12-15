#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: structure
 * @idx: position
 * @n: element
 * Return:  or NULL
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nn, *nt, na;
	unsigned int a = 0, i = 0;

	nt = *h;
	while (nt)
	{
		nt = nt->next;
		i++;
	}
	if (idx == i)
	{
		return (add_dnodeint_end(h, n));
	}
	else if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else if (idx > i)
	{
		return (NULL);
	}
	nt = *h;
	while (a < idx)
	{
		na = nt;
		nt = nt->next;
		a++;
	}
	nn = malloc(sizeof(dlistint_t));
	if (nn)
	{
		nn->n = n;
		nn->next = nt;
		nn->prev = na;
		na->next = nn;
		nt->prev = nn;
		return (nn);
	}
	return (NULL);
}
