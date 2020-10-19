#include "holberton.h"

/**
 * print_array - prints elements of an array of integers
 * @a: array
 * @n: number of element to print
 */
void print_array(int *a, int n)
{
	int b = 0;

	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
		while (b < n - 1)
		{
			printf("%i, ", a[b]);
			b++;
		}
		printf("%i\n", a[b]);
	}
}
