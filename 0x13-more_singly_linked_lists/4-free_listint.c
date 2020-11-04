#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: list
 */
void free_listint(listint_t *head)
{
	listint_t *nn;

	if (!head)
	{
		return;
	}
	while (head)
	{
		nn = head;
		head = head->next;
		free(nn);
	}
	head = NULL;
}
