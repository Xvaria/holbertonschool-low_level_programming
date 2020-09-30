#include "holberton.h"

/**
 * _strlen - length string
 * Description: returns the length of a string
 * @s: pointer
 * Return: s - a
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
 * puts2 - print array jump
 * Description: prints one char out of 2 of a string
 * @str: pointer
 */
void puts2(char *str)
{
	int b;
	int c = _strlen(str);

	for (b = 0; b < c; b += 2)
	{
		_putchar(*(str + b));
	}
	_putchar('\n');
}
