#include "holberton.h"

/**
 * _strlen - length string
 * Description: returns the length of a string
 * @s: pointer
 * Return: s - a
 */
int _strlen(char *s)
{
	char *a = s;

	while (*s)
	{
		s++;
	}
	return (s - a);
}
