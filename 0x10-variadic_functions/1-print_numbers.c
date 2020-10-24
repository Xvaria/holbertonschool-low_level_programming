#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: printed between numbers
 * @n: number og arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int a = 0;
	int p;

	va_start(valist, n);
	while (a < n - 1)
	{
		p = va_arg(valist, int);
		printf("%i", p);
		if (separator)
		{
			printf("%s", separator);
		}
		a++;
	}
	p = va_arg(valist, int);
	printf("%i\n", p);
	va_end(valist);
}
