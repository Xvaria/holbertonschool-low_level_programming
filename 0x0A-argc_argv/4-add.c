#include <stdio.h>
#include <stdlib.h>

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

	b = 0;
	if (argc >= 2)
	{
		for (a = 1; a < argc; a++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
			c += atoi(argv[a]);
			b++;
		}
		printf("%i\n", c);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
