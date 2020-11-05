#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 * Return: d - decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int d = 0, m = 1;
	int a = 0;

	if (!b)
		return (0);
	while (b[a])
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		a++;
	}
	for (a -= 1; a >= 0; a--)
	{
		if (b[a] == '1')
			d += m;
		m *= 2;
	}
	return (d);
}
