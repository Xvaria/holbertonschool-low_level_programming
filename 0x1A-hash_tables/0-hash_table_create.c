#include "hash_tables.h"

/**
 * hash_table_create - Create a new hash table
 * @size: size of the array
 * Return: new hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *nt = NULL;

	nt = malloc(sizeof(hash_table_t));
	if (!nt)
	{
		return (NULL);
	}
	nt->array = malloc(sizeof(hash_node_t *) * size);
	if (!nt->array)
	{
		free(nt);
		nt = NULL;
		return (NULL);
	}
	while (i < size)
	{
		nt->array[i] = NULL;
		i++;
	}
	nt->size = size;
	return (nt);
}
