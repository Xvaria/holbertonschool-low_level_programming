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
	char *a;
	int b = 0, c = 0;

	while (str[b] != '\0')
	{
		b++;
	}
	a = malloc(sizeof(char) * b + 1);
	if (*str != '\0')
	{
		while (*str <= '\0')
		{
			a[c] = str[c];
			c++;
		}
		if (*a != *str)
		{
			return ('\0');
		}
		return (a);
	}
	return ('\0');
}
