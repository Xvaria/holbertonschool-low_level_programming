#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of
 * an array
 * @array: array of numbers
 * @size: number of numbers to print
 * @action: functions
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		while(size--)
		{
			action(*(array++));
		}
	}
}
