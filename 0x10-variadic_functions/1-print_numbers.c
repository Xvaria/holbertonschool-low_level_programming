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

	if (separator)
	{
		va_start(valist, n);
		while (a < n - 1)
		{
			printf("%i%s", va_arg(valist, int), separator);
			a++;
		}
		printf("%i", va_arg(valist, int));
		va_end(valist);
	}
	printf("\n");
}
