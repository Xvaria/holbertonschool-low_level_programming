#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: digit
 */
void print_binary(unsigned long int n)
{
	_Bool b = false;
	unsigned long int a;

	register short f = sizeof(n) * 8 - 1;

	if (!n)
	{
		write(1, "0", 1);
		return;
	}
	for (; f >= 0; f--)
	{
		a = n >> f;
		if (a & 1)
		{
			b = true;
			write(1, "1", 1);
		}
		else if (b)
		{
			write(1, "0", 1);
		}
	}
}
