#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *t = NULL;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				while (ht->array[i])
				{
					t = ht->array[i]->next;
					free(ht->array[i]->key);
					free(ht->array[i]->value);
					free(ht->array[i]);
					ht->array[i] = t;
				}
			}
			free(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}
