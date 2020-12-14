#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data n of a dlistint_t linked list
 * @head: structure
 * Return: i
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *nn;
	int i = 0;

	nn = head;
	while(nn)
	{
		i = i + nn->n;
		nn = nn->next;
	}
	return (i);
}
