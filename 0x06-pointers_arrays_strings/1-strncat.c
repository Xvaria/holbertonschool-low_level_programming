#include "holberton.h"

/**
 * _strncat - concatenates two
 * Description: concatenates two strings n bytes
 * @dest: hello
 * @src: world!
 * @n: bytes
 * Return: dest+src n bytes
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	char *b;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = dest + a;
	while (*src && n--)
	{
		*b++ = *src++;
	}
	*b = 0;
	return (dest);
}
