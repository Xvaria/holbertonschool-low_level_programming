#include "holberton.h"

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
