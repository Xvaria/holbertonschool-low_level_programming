#include "holberton.h"

/**
 * _print_rev_recursion - reverse
 * Description: prints a string in reverse
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(s + 1);
		_putchar(*s);
	}
}
