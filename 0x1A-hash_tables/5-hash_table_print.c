#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 * Return: a dictionary
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, sw = 0;
	hash_node_t *head = NULL;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				if (sw == 1)
					printf(", ");
				head = ht->array[i];
				while (head)
				{
					sw = 1;
					printf("'%s': '%s'", head->key, head->value);
					head = head->next;
					if (head)
					{
						printf(", ");
					}
				}
			}
		}
		printf("}");
		printf("\n");
	}
}
