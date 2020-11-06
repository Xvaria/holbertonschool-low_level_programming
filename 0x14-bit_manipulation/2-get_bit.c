#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: digit
 * @index: the index, starting from 0 of the bit you want to get
 * Return: 1, 0 or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8 - 1)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
