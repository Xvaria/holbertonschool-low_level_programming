#include <stdio.h>

/**
 * main - prints the number
 * Description: prints the number of arguments passed into it
 * @argc: number
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argv)
	{
		printf("%i\n", argc - 1);
	}
	return (0);
}
