#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	char *p;
	unsigned int a = 0;

	va_start(valist, format);
	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
			case 'c':
				printf("%c", va_arg(valist, char));
				break;
			case 'i':
				printf("%i", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", va_arg(valist, float));
				break;
			case 's':
				p = va_arg(valist, char *);
				if (!p)
					p = "(nil)";
				printf("%s", p);
				break;
			default:
				a++;
				continue;
			}
			printf(", ");
			a++;
		}
	}
	printf("\n");
	va_end(valist);
}
