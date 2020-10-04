#include "holberton.h"

/**
 * reverse_array - Reverse array
 * Description: Reverse tje content of an array
 * @a: array
 * @n: content
 */
void reverse_array(int *a, int n)
{
	int d1, d2, b;

	b = 0;
	while (b < n)
	{
		d1 = *(a + b);
		d2 = *(a + n - 1);
		*(a + b) = d2;
		*(a + n - 1) = d1;
		b++;
		n--;
	}
}
