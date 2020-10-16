#include "holberton.h"

/**
 * array_range - creates an array of integers
 * @min: value min
 * @max: values max
 * Return a or NULL
 */
int *array_range(int min, int max)
{
	int *a;
	int b = 0;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * (1 + max - min));
	if (!a)
	{
		return (NULL);
	}
	while (min <= max)
	{
		a[b] = min;
		min++;
		b++;
	}
	return (a);
}
