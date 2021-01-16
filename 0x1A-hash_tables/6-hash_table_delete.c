#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *t = NULL, *nt = NULL;

	if (!ht)
		return;

	while (i < ht->size)
	{
		nt = ht->array[i];
		while (t)
		{
			t = nt;
			nt = nt->next;
			if (t->key)
				free(t->key);
			if (t->value)
				free(t->value);
			free(t);
		}
		free(ht->array[i]);
		i++;
	}
	free(ht->array);
	free(ht);
}
