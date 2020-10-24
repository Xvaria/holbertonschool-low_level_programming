#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: between the strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int a = 0;
	char *s;

	va_start(valist, n);
	while (a < n)
	{
		s = va_arg(valist, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator && a < n - 1)
			printf("%s", separator);
		a++;
	}
	printf("\n");
	va_end(valist);
}
