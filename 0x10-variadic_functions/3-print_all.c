#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	char *p, *s = "";
	unsigned int a = 0;

	va_start(valist, format);
	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
			case 'c':
				printf("%s%c", s, va_arg(valist, int));
				break;
			case 'i':
				printf("%s%i", s, va_arg(valist, int));
				break;
			case 'f':
				printf("%s%f", s, va_arg(valist, double));
				break;
			case 's':
				p = va_arg(valist, char *);
				if (!p)
					p = "(nil)";
				printf("%s%s", s, p);
				break;
			default:
				a++;
				continue;
			}
			s = ", ";
			a++;
		}
	}
	printf("\n");
	va_end(valist);
}
