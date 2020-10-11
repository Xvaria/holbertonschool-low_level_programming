#include <stdio.h>

/**
 *
 *
 *
 *
 *
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
