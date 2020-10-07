#include "holberton.h"

/**
 * _puts_recursion - prints a string
 * Description: prints a string, followed by a new line
 * @s: string
 */
void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
