#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: list
 * @n: value
 * Return: NULL, head or l
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nn;
	listint_t *l = *head;

	if (!n)
	{
		return (NULL);
	}
	nn = malloc(sizeof(listint_t));
	if (!nn)
	{
		return (NULL);
	}
	nn->n = n;
	nn->next = NULL;
	if (!*head)
	{
		*head = nn;
		return (*head);
	}
	while (l->next)
	{
		l = l->next;
	}
	l->next = nn;
	return (l);
}
