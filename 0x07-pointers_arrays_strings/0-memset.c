#include "holberton.h"

/**
 * _memset - fills memory
 * Description: fills memory with a constant byte
 * @s: array
 * @b: constant
 * @n: repeat
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	while (n--)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
