#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: Bob, Bob Dylan
 * @f: pointer to functions
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
