#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: strcuture
 * Return: a
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;
	const list_t *ht = h;

	while (ht)
	{
		if (!ht->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", ht->len, ht->str);
		}
		ht = ht->next;
		a++;
	}
	return (a);
}
