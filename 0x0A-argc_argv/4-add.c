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
	int a;
	int c = 0;

	if (argc >= 2)
	{
		for (a = 1; a < argc; a++)
		{
			if (atoi(argv[a]) != 0)
			{
				c += atoi(argv[a]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
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
