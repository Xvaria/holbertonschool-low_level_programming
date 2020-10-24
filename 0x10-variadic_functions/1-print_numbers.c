#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: printed between numbers
 * @n: number or arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int a = 0;

	va_start(valist, n);
	while (a < n)
	{
		printf("%i", va_arg(valist, int));
		if (separator && a < n - 1)
		{
			printf("%s", separator);
		}
		a++;
	}
	printf("\n");
	va_end(valist);
}
