#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: structure
 * Return: a - numbre of elements
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;
	const list_t *ht = h;

	while (ht)
	{
		if (ht->str)
		{
			a++;
		}
		if (ht->len)
		{
			a++;
		}
		ht = ht->next;
	}
	return (a);
}
