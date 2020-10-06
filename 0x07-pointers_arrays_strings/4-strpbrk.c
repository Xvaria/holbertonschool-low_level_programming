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

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
