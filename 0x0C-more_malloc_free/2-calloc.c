#include "Holberton.h"

/**
 * _calloc - allocates memory
 * Description: allocates memory for an array, using malloc
 * @nmemb: 
 * @size:
 * Return:
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	int b = 0;

	if (!nmemb || !size)
	{
		return (NULL);
	}
	a = malloc(size * nmemb);
	if (!a)
	{
		return (NULL);
	}
	while (b < (size * nmemb))
	{
		a[b] = 0;
		b++;
	}
	return (a);
}
