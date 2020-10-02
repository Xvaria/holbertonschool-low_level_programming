#include "holberton.h"

/**
 * _strcat - concatenates
 * Description: concatenates two strings
 * @dest: hello
 * @src: world \n
 * Return: dest "hello world"
 */
char *_strcat(char *dest, char *src)
{
	int a;
	char *ptr;

	while (dest[a] != '\0')
	{
		a++;
	}
	ptr = dest + a;
	while (*src)
	{
		*ptr++ = *src++;
	}
	*ptr = 0;
	return (dest);
}
