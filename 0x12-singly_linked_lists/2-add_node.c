#include "lists.h"

/**
 * list_add_node - 
 * @h: 
 * Return: 
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nn;
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
	nn->next = *head;
	*head = nn;
	return (*head);
}
