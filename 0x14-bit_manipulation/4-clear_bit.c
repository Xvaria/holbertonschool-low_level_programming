#include "holberton.h"

/**
 *
 *
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index > sizeof(index) * 8 - 1)
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
