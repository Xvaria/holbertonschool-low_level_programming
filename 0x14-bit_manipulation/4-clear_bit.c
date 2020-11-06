#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: digit
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index > sizeof(n) * 8 - 1)
	{
		return (-1);
	}
	if (*n == 0)
	{
		*n = 0;
		return (1);
	}
	while (index--)
	{
		m *= 2;
	}
	*n -= m;
	return (1);
}
