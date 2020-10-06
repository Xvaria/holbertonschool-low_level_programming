#include "holberton.h"

/**
 * _strspn - gets the length
 * Description: gets the length of a prefix substring
 * @s: array
 * @accept: search
 * Return: b
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	unsigned int d = 0;

	a = 0;
	b = 0;
	while (s[a] != '\0')
	{
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				d++;
				break;
			}
			b++;
		}
		if (s[a] != accept[b])
		{
			break;
		}
		b = 0;
		a++;
	}
	return (d);
}
