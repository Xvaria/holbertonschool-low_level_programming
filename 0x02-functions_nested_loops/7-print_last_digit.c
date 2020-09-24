#include "holberton.h"

/**
 * print_last_digit - Print de last digit of a number
 * @a: integer
 * return: a
 */
int print_last_digit(int a)
{
	int b;

	if (a < 0)
	{
		a = a * -1;
	}
	b = a % 10;
        _putchar(b + 48);
	return (b);
}
