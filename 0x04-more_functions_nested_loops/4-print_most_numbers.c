#include "holberton.h"

/**
 * print_most_numbers - print number 0 to 9
 * Description: print numbers 0 to 9, do not print 2 and 4
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if (a != 50 && a != 52)
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
