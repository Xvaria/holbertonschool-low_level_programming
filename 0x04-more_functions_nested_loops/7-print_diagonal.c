#include "holberton.h"

/**
 * print_diagonal - draws a diagonal
 * Description: draws a diagonal line on the terminal
 * @n: integer
 */
void print_diagonal(int n)
{
	int a, b, c, d;

	c = 1;
	d = 0;
	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < c; b++)
			{
				_putchar(b < d ? ' ' : '\\');
			}
			_putchar('\n');
			c++;
			d++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
