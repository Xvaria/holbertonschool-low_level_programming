#include "holberton.h"

/**
 * _puts_recursion - prints a string
 * Description: prints a string, followed by a new line
 * @s: string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
