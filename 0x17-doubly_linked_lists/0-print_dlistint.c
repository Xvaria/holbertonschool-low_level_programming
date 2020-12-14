#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: strcuture
 * Return: a
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t a = 0;
	const dlistint_t *ht = h;

	while (ht)
	{
		printf("%i\n", ht->n);
		ht = ht->next;
		a++;
	}
	return (a);
}
