#include "holberton.h"

/**
 * leet - Change string
 * Description: Change all lowercase to uppercase in string
 * @s: array
 * Return: b
 */
char *leet(char *s)
{
	char *b = s;

	while (*s != '\0')
	{
		if (*s == 'a' || *s == 'A')
		{
			*s = '4';
		}
		else if (*s == 'e' || *s == 'E')
		{
			*s = '3';
		}
		else if (*s == 'o' || *s == 'O')
		{
			*s = '0';
		}
		else if (*s == 't' || *s == 'T')
		{
			*s = '7';
		}
		else if (*s == 'l' || *s == 'L')
		{
			*s = '1';
		}
		else
		{
		}
		s++;
	}
	return (b);
}
