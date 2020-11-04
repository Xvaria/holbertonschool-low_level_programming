#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: list
 * @n: values
 * Return: NULL or head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nn;

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
	nn->next = *head;
	*head = nn;
	return (*head);
}
