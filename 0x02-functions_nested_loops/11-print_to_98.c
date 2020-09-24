#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - returns sum of i + j
 * @a: integer
 */
void print_to_98(int a)
{
	int b;

	if (a <= 98)
	{
		for (b = a; b < 98; b++)
		{
			printf("%i, ", b);
		}
	}
	else
	{
		for (b = a; b > 98; b--)
		{
			printf("%i, ", b);
		}
	}
	printf("98\n");
}
