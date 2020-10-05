#include "holberton.h"

/**
 * string_toupper - Change string
 * Description: Change all lowercase to uppercase in string
 * @s: array
 * Return: b
 */
char *string_toupper(char *s)
{
	char *b = s;

	while (*s != '\0')
	{
		if (*s >= 97 && *s <= 122)
		{
			*s = *s - 32;
		}
		s++;
	}
	return(b);
}
