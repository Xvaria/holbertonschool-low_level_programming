#include <stdio.h>

/**
 *
 *
 *
 */
int main(void)
{
	long a = 0, b = 1, c = 0, i;

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		printf("%ld", c);
		if (i != 49)
			printf(", ");
		else
			printf("\n");
		if (a > 1)
			b = a;
		a = c;
	}
	return (0);
}
