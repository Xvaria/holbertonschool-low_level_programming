#include "holberton.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * Description: prints the numbers, from 0 to 9, followed by a new line
 */
void print_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
