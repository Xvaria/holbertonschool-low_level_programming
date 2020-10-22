#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of parameters
 * @argv: parameters
 * Return: 0 or r
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (b == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	c = get_op_func(argv[2])(a, b);
	printf("%i\n", c);
	return (0);
}
