#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list
 * @head: structure
 * @index: index
 * Return:  1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *nt;

	if (!head || !*head)
		return (-1);

	nt = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(nt);
		return (1);
	}
	while (nt->next)
	{
		if (i == index)
		{
			nt->next->prev = nt->prev;
			nt->prev->next = nt->next;
			free(nt);
			return (1);
		}
		nt = nt->next;
		i++;
	}
	return (-1);
}
