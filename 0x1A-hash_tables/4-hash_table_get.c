#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value by key
 * @ht: hash table
 * @key: key
 * Return: associated value, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *t = NULL;

	if (key == NULL)
		return (NULL);
	if (ht != NULL)
	{
		i = key_index((const unsigned char *)key, ht->size);
		t = ht->array[i];
		while (t != NULL)
		{
			if (strcmp(t->key, key) == 0)
				return (t->value);
			t = t->next;
		}
	}
	return (NULL);
}
