#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: n or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int s = 0;
	unsigned int a = 0;

	if (n != 0)
	{
		va_start(valist, n);
		while (a < n)
		{
			s += va_arg(valist, int);
			a++;
		}
		va_end(valist);
		return (s);
	}
	return (0);
}
