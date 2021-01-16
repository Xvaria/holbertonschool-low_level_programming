#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to hash table
 * @ht: hash table to update
 * @key: key
 * @value: value of key
 * Return: updated table
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	char *tv = NULL;
	hash_node_t *t = NULL;
	hash_node_t *n = NULL;

	if (ht == NULL || ht->array == NULL || value == NULL)
		return (0);

	if (strlen(key) == 0 || key == NULL)
		return (0);
	tv = strdup(value);
	if (tv == NULL)
		return (0);
	i = key_index((unsigned char *)key, ht->size);

	/* Collision checker */
	t = ht->array[i];
	while (t)
	{
		if (strcmp(t->key, key) == 0)
		{
			free(t->value);
			t->value = tv;
			t->value = strdup(value);
			free(tv);
			return (1);
		}
		t = t->next;
	}
	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
	{
		free(n);
		return (0);
	}
	n->key = strdup(key);
	n->value = tv;
	n->next = ht->array[i];
	ht->array[i] = n;
	return (1);
}
