#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 * @a: matrix
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i = 0, s = 0, s1 = 0;

	while(i < size)
	{
		s += a[i + (i * size)];
		s1 += a[(size * (i + 1)) - (i + 1)];
		i += 1;
	}
	printf("%d, %d\n", s, s1);
}
