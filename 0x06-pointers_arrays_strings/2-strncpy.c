#include "holberton.h"

/**
 * _strncpy - copy string
 * Description: function that copies a string
 * @dest: Destiny
 * @src: Source
 * @n: bytes to copied
 * Return: a - copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *a;

	a = dest;
	while (*src && n--)
	{
		*dest++ = *src++;
	}
	if (!*src)
	{
		while (*dest && n--)
		{
			*dest++ = 0;
		}
	}
	return (a);
}
