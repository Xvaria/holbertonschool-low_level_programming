#include "holberton.h"

/**
 * _strcpy -  copies the string
 * Description: copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @dest: Destiny
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = src[a];
	return (dest);
}
