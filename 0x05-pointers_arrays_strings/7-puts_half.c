#include "holberton.h"

/**
 * puts_half - print half string
 * Description: prints half of a string, followed by a new line
 * @str: string
 */
void puts_half(char *str)
{
	int a, b;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 = 0)
	{
		b = a / 2;
	}
	else
	{
		b = ((a - 1) / 2);
	}
	while (str[b] != '\0')
	{
		_putchar(*(str + b));
		b++;
	}
	_putchar('\n');
}
