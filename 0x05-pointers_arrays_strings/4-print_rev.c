#include "holberton.h"


/**
 * _strlen - length string
 * Description: returns the length of a string
 * @s: pointer
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

/**
 * print_rev - print reverses a string
 * Description: prints a string, in reverse, followed by a new line
 * @s: pointer
 */
void print_rev(char *s)
{
	int a = _strlen(s);

	while (a--)
	{
		_putchar(*(s + a));
	}
	_putchar('\n');
}
