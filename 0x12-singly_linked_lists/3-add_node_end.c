#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: list
 * @str: string
 * Return: NULL, head or l
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nn;
	list_t *l = *head;
	char *s;
	unsigned int a;

	if (!str)
	{
		return (NULL);
	}
	nn = malloc(sizeof(list_t));
	if (!nn)
	{
		return (NULL);
	}
	s = strdup(str);
	if (!s)
	{
		free(nn);
		return (NULL);
	}
	for (a = 0; s[a]; a++)
	{
	}
	nn->len = a;
	nn->str = s;
	nn->next = NULL;
	if (!*head)
	{
		*head = nn;
		return (*head);
	}
	while (l->next)
		l = l->next;
	l->next = nn;
	return (l);
}
