#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index where value is located or -1 if array is NULL or no match
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, poslow = 0, postop = size - 1, pos = 0;

	if (array)
		while (poslow <= postop)
		{
			pos = (poslow + postop) / 2;

			printf("Searching in array: ");
			for (i = poslow; i <= postop; i++)
			{
				if (i != postop)
					printf("%d, ", array[i]);
				else
					printf("%d", array[i]);
			}
			printf("\n");

			if (array[pos] < value)
				poslow = pos + 1;
			else if (array[pos] > value)
				postop = pos - 1;
			else
				return (pos);
		}
	return (-1);
}
