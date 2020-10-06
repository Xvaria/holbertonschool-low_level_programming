#include "holberton.h"

/**
 * _strpbrk - searches a string
 * Description: searches a string for any of a set of bytes
 * @s: array
 * @accept: search
 * Return: b
 */
char *_strpbrk(char *s, char *accept)
{
	int b;

	b = 0;
	while (*s)
	{
		while (accept[b] != '\0')
		{
			if (*s == accept[b])
			{
				return (s);
			}
			b++;
		}
		s++;
	}
	return (NULL);
}
