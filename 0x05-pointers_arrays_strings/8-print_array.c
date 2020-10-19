#include "holberton.h"

/**
 * print_array - prints elements of an array of integers, followed by a new line
 * @a: array
 * @n: number of element to print
 */
void print_array(int *a, int n)
{
	int b = 0;

	while (b < n - 1)
	{
		printf("%i, ", a[b]);
		b++;
	}
	printf("%i\n", a[b]);
}
