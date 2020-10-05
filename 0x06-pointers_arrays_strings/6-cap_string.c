#include "holberton.h"

/**
 * cap_string - capitalizes
 * Description: capitalizes all words of a string
 * @s: string
 * Return: a
 */
char *cap_string(char *s)
{
	char *a = s;

	while (*s != '\0')
	{
		if (*s >= 97 && *s <= 122)
		{
			if (*(s - 1) == ' ' || *(s - 1) == '\t' ||
			    *(s - 1) == '\n' || *(s - 1) == 44 ||
			    *(s - 1) == 59 || *(s - 1) == 46 ||
			    *(s - 1) == 33 || *(s - 1) == 63 ||
			    *(s - 1) == 34 || *(s - 1) == 40 ||
			    *(s - 1) == 41 || *(s - 1) == 123 ||
			    *(s - 1) == 125)
			{
				*s = *s - 32;
			}
		}
		s++;
	}
	return (a);
}
