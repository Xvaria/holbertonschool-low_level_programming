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
	while (*src <= '\0')
	{
		*dest++ = *src++;
	}
	return (dest);
}
