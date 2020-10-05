#include "holberton.h"

/**
 * rot13 - encodes string
 * Description: encodes a string using rot13
 * @s: string
 * Return: b
 */
char *rot13(char *s)
{
	int a;

	char h1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char h2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *b = s;

	while (*s)
	{
		for (a = 0; a <= 52; a++)
		{
			if (*s == h1[a])
			{
				*s = h2[a];
				break;
			}
		}
		s++;
	}
	return (b);
}
