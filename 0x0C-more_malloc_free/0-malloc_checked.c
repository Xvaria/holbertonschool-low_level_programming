#include "holberton.h"

/**
 * malloc_checked - allocates memory
 * Description: allocates memory using malloc
 * @b: size
 * Return: a or termination status 98
 */
void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (!a)
	{
		exit(98);
	}
	return (a);
}
