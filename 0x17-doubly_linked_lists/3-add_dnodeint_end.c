#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: structure
 * @n: element
 * Return: nn or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nn;
	dlistint_t *l = *head;

	nn = malloc(sizeof(dlistint_t));
	if (nn)
	{
		nn->n = n;
		if (!*head)
		{
			*head = nn;
		}
		else
		{
			while (l->next)
				l = l->next;
			l->next = nn;
			nn->prev = l;
		}
		return (nn);
	}
	return (NULL);
}
