#include "holberton.h"

/**
 * _strlen - length string
 * Description: returns the length of a string
 * @s: pointer
 * Return: s - a
 */
void puts_half(char *str)
{
	int a, b;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	b = a / 2;
	while (str[b] != '\0')
	{
		_putchar(*(str + b));
		b++;
	}
	_putchar('\n');
}
