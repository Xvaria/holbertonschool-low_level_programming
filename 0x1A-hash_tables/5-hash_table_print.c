#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 * Return: a dictionary
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *t = NULL;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		t = ht->array[i];
		while (t)
		{
			printf("'%s' : '%s'", t->key, t->value);
			if (ht->array[i + 1] == NULL)
				break;
			printf(", ");
			t = t->next;
		}
		i++;
	}
	printf("}\n");
}
