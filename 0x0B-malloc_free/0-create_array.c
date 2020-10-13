#include "holberton.h"

/**
 * create_array - creates an array of chars
 * Description: creates an array and initializes it with a specific char
 * @size: size of array
 * @c: char
 * Return: a or null
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	int b = 0;

	a = malloc(sizeof(char) * size);
	if (size != 0)
	{
		if (a != '\0')
		{
			while (size--)
			{
				a[b] = c;
				b++;
			}
			return (a);
		}
		else
		{
			return ('\0');
		}
	}
	return ('\0');
}
