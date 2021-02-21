#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024 (excluded)
 * Return: 0
 */
int main(void)
{
	long t = 0, c = 0, nt = 1, nc = 1, s = 0;

	while (t < 1024 && c < 1024)
	{
		t = 3 * nt;
		c = 5 * nc;
		if (c < t)
		{
			if (c < 1024)
				s += c;
			nc++;
		}
		if (t != c)
		{
			if (t < 1024)
				s += t;
		}
		nt++;
	}
	printf("%ld\n", s);
	return (0);
}
