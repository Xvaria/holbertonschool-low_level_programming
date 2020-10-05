#include "holberton.h"

/**
 * leet - Encode string
 * Description: encodes a string into 1337
 * @s: string
 * Return: p
 */
char *leet(char *s)
{
	int a;
	char *l = "ol2ea56t89OL2EA56T";
	char *p = s;

	while (*s)
	{
		for (a = 0; a < 18; a++)
		{
			if (*s == l[a])
				*s = (a % 10) + 48;
		}
		s++;
	}
	return (p);
}
