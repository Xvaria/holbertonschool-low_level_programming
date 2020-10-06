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
	int a, b;

	a = 0;
	b = 0;
	while (s[a] != '\0')
	{
		a++;
		while (accept[b] != '\0')
		{
			b++;
			if (s[a] == accept[b])
			{
				return (s);
			}
			else if (s[a] != accept[b])
			{
				return ('\0');
			}
		}
}
