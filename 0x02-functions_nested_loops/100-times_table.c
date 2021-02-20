#include "holberton.h"

/**
 * print_spaces - function for print the spaces
 * @s: times to repeat space
 */
void print_spaces(int s)
{
	int n = 0;

	_putchar(',');
	while (n < s)
	{
		_putchar(' ');
		n++;
	}
}


/**
 * print_times_table - prints the n times table, starting with 0
 * @n: times table
 */
void print_times_table(int n)
{
	int i, j, d = 0;

	if (n <= 15 && n >= 0)
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				d = j * i;
				if (d < 10)
				{
					if (j != 0)
					{
						print_spaces(3);
					}
					_putchar(d + 48);
				}
				else if (d > 9 && d < 100)
				{
					if (j != 0)
					{
						print_spaces(2);
					}
					_putchar((d / 10) + 48);
					_putchar((d % 10) + 48);
				}
				else
				{
					if (j != 0)
						print_spaces(1);
					_putchar(((d / 10) / 10) + 48);
					_putchar(((d - 100) / 10) + 48);
					_putchar((d % 10) + 48);
				}
			}
			_putchar('\n');
		}
}
