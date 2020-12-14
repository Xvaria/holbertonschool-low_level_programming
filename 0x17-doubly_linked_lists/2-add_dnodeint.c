#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: structure
 * @n: element
 * Return: nn or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nn;

	nn = malloc(sizeof(dlistint_t));
	if (nn)
	{
		nn->n = n;
		nn->next = *head;
		nn->prev = NULL;
		if (*head)
		{
			(**head).prev = nn;
		}
		*head = nn;
		return (nn);
	}
	return (NULL);
}
