#include "holberton.h"

/**
 *
 *
 *
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 48; a < 51; a++)
	{
		if(a < 50)
		{
			for (b = 48; b < 58; b++)
			{
				for (c = 48; c < 54; c++)
				{
					for (d = 48; d < 58; d++)
					{
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(c);
						_putchar(d);
						_putchar('\n');
					}
				}
			}
		}
		else
		{
			for (b = 48; b < 52; b++)
			{
				for (c = 48; c < 54; c++)
				{
					for (d = 48; d < 58; d++)
					{
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(c);
						_putchar(d);
						_putchar('\n');
					}
				}
			}
		}
	}
}
