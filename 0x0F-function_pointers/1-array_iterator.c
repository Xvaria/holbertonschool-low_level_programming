#include "function_pointers.h"

/**
 * 
 * 
 * 
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action && action)
	{
		while(size--)
		{
			action(array++);
		}
	}
}
