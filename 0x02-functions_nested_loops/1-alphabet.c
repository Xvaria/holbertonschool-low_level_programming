#include "holberton.h"

/**
 * main - Print a to z
 * Description: Print a to z
 * Return: 0
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
