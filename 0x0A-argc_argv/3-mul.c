#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies
 * Description: multiplies two numbers
 * @argc: number of arguments
 * @argv: numbers to multiply
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{

	int c;

	if (argc == 3)
	{
		c = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", c);
		return (0);
	}
	else
	{
		printf("error\n");
		return (1);
	}
}
