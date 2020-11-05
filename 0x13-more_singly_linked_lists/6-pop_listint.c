#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 * the head nodes data (n)
 * @head: list
 * Return: 0 or a
 */
int pop_listint(listint_t **head)
{
	listint_t *nn;
	int a;

	if (!(*head) || !head)
		return (0);
	nn = *head;
	a = nn->n;
	*head = (*head)->next;
	free(nn);
	return (a);
}
