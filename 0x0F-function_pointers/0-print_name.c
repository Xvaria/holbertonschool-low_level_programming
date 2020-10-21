#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: Bob, Bob Dylan
 * @f: pointer to functions
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
