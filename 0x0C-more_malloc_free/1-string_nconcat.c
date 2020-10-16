#include "holberton.h"

/**
 * string_nconcat - concatenates
 * @s1: Holberton
 * @s2: School !!!
 * @n: bytes of s2
 * Return: a or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int b = 0, c = 0, d = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[b])
		b++;
	while (s2[c])
		c++;
	if (n >= c)
		a = malloc(sizeof(char) * (b + c + 1));
	else
		a = malloc(sizeof(char) * (b + n + 1));
	if (!a)
		return (NULL);
	while (s1[d])
	{
		a[d] = s1[d];
		d++;
	}
	d = 0;
	if (n >= c)
		while (d <= c)
		{
			a[d + b] = s2[d];
			d++;
		}
	else
	{
		while (d < n)
		{
			a[d + b] = s2[d];
			d++;
		}
		a[d + b] = 0;
	}
	return (a);
}
