#include "holberton.h"

/**
 * swap_int - swap values
 * Description: swaps the values of two integers
 * @a: pointer 1
 * @b: pointer 2
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
