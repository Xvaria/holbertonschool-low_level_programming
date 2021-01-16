#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 * Return: index of a key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int fi = 0;

	fi = hash_djb2(key);
	return (fi % size);
}
