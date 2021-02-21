#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024 (excluded)
 * Return: 0
 */
int main(void)
{
	long t = 0, n = 1, s = 0;

	while (t < 1024)
	{
		t = 3 * n;
		if (t < 1024)
		{
			s += t;
		}
		n++;
	}
	printf("%ld\n", s);
	return (0);
}
