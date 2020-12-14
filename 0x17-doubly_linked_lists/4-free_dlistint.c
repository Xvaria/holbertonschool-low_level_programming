#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: structure
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nt;

	while (head)
	{
		nt = head->next;
		free(head);
		head = nt;
	}
	head = NULL;
}
