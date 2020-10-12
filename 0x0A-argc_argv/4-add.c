#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds
 * Description: adds positive numbers
 * @argc: numbers of digits
 * @argv: digits to add
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int a, b;
	int c = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (isdigit(argv[a][b]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				c += atoi(argv[a]);
			}
		}
	}
	printf("%i\n", c);
	return (0);
}
