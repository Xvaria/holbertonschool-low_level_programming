#include "holberton.h"

/**
 * _strspn - gets the length
 * Description: gets the length of a prefix substring
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
