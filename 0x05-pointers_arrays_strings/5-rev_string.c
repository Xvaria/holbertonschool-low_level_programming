#include "holberton.h"

/**
 * _strlen - length string
 * Description: returns the length of a string
 * @s: pointer
 * Return: s - a
 */
int _strlen(char *s)
{
	char *a = s;

	while (*s)
	{
		s++;
	}
	return (s - a);
}

/**
 * rev_string - reverse
 * Description: reverses a string
 * @s: pointer
 */
void rev_string(char *s)
{
	int a = _strlen(s);
	char b;
	char *i = s, *f = s;

	f += a - 1;
	while (i < f)
	{
		b = *i;
		*i = *f;
		*f = b;
		i++;
		f--;
	}
}
