#include <stdio.h>

/**
 * main - prints its name
 * Description: prints its name, followed by a new line
 * @argc: number
 * @argv: name
 * Return: 0
 */
int main(int argc, char* argv[])
{
	if (argc)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
