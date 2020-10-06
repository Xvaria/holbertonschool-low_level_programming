#include "holberton.h"

/**
 * _memcpy - copy memory
 * Description: copies memory area
 * @dest: destiny
 * @src: source
 * @n: repeat
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;

	while (n--)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
