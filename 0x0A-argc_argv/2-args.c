#include <stdio.h>

/**
 * main - prints all
 * Description: prints all arguments it receives
 * @argc: number of arguments
 * @argv: string of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a = 0;

	while (a <= argc - 1)
	{
		printf("%s\n", argv[a]);
		a++;
	}
	return (0);
}
