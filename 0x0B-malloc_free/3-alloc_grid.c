#include "holberton.h"

/**
 * alloc_grid - 2 dimensional array
 * Description: returns a pointer to a 2 dimensional array of integers
 * @width: width array
 * @height: height array
 * Return: a or null
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int b = 0, c = 0;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}
	a = malloc(sizeof(int *) * height);
	if (!a)
	{
		return ('\0');
	}
	while (b < height)
	{
		a[b] = malloc(sizeof(int) * width);
		b++;
		if (!a[b])
		{
			return ('\0');
		}
	}
	b = 0;
	while (b < height)
	{
		while (c < width)
		{
			a[b][c] = 0;
			c++;
		}
		b++;
		c = 0;
	}
	return (a);
}
