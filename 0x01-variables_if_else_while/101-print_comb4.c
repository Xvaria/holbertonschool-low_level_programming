#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: 0
 */

int main(void)
{
	int a, b, c;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 48; c < 58; c++)
			{
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a + 1 < 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
