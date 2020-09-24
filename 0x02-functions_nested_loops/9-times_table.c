#include "holberton.h"

/**
 * times_table - prints times table
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (b == 0)
			{
				_putchar(48);
				continue;
			}
			c = a * b;
			_putchar(',');
			_putchar(' ');
			if (c >= 10)
			{
				_putchar(c / 10 + 48);
				_putchar(c % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(c + 48);
			}
		}
		_putchar('\n');
	}
}
