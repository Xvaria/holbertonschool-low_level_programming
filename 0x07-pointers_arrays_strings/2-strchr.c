#include "holberton.h"

/**
 * _strchr - locates
 * Description: locates a character in a string
 * @s: String
 * @c: Character
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (s);
}
