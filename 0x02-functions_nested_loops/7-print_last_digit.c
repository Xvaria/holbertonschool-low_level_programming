#include "holberton.h"

/**
 * print_last_digit - Print de last digit of a number
 * @a: integer
 * Return: b
 */
int print_last_digit(int a)
{
	int b;

	b = _abs((a % 10));
	_putchar(b + 48);
	return (b);
}
