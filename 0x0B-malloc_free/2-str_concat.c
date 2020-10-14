#include "holberton.h"

/**
 * str_concat - concatenate
 * Description: concatenates two strings
 * @s1: Betty
 * @s2: Holberton
 * Return: a or null
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int b = 0, c = 0, d = 0, e = 0;

	while (s1[b])
	{
		b++;
	}
	while (s2[c])
	{
		c++;
	}
	d = b + c;
	a = malloc(sizeof(char) * d + 1);
	if (!a)
	{
		return ('\0');
	}
	while (e < b)
	{
		a[e] = s1[e];
		e++;
	}
	b = 0;
	while (e < d)
	{
		a[e] = s2[b];
		e++;
		b++;
	}
	a[e] = 0;
	return (a);
}
