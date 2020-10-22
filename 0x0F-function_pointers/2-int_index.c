#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of numbers
 * @size: number of elements
 * @cmp: pointer to function
 * Return: a or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (array && cmp)
	{
		while (size--)
		{
			if (cmp(array[a]))
			{
				return (a);
			}
			a++;
		}
	}
	return (-1);
}
