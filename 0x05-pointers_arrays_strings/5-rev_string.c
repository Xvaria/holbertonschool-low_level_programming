#include "holberton.h"

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
