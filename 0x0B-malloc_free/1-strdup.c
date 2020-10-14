#include "holberton.h"

/**
 * _strdup - newly allocated space in memory
 * Description: returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: NULL or string
 */
char *_strdup(char *str)
{
	char *a = '\0';
	int b = 0, c = 0;

	if (!str)
	{
		while (str[b] != '\0')
		{
			b++;
		}
		a = malloc(sizeof(char) * b + 1);
		while (c <= b)
		{
			a[c] = str[c];
			c++;
		}
		if (!a)
		{
			return ('\0');
		}
		return (a);
	}
	return ('\0');
}
