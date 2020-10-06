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
	while (s)
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*s == '\0')
		{
			return ('\0');
		}
		s++;
	}
}
