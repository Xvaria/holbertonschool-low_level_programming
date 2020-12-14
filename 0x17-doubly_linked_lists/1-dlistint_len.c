#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: strcuture
 * Return: a
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t a = 0;
	const dlistint_t *ht = h;

	while (ht)
	{
		ht = ht->next;
		a++;
	}
	return (a);
}
