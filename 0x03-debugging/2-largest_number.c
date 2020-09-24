#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: d
 */

int largest_number(int a, int b, int c)
{
	int d;

	if (a >= b && a >= c)
	{
		d = a;
	}
	else if (b >= a && b >= c)
	{
		d = b;
	}
	else
	{
		d = c;
	}

	return (d);
}
