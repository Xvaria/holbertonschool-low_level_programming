#include "holberton.h"

/**
 * _puts - print string
 * Description: prints a string, followed by a new line
 * @str: pointer
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
