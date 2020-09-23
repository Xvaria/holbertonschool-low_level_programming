#include "holberton.h"
/**
 * print_alphabet_x10 - Print a to z x10
 * Description: Print a to z x10 with _putchar
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a;
	int b;

	for (b = 48; b < 58; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
