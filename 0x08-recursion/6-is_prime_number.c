#include "holberton.h"

/**
 * HPrime - function for is_prime_number
 * @n: number
 * @i: count
 * Return: 1 if true, 0 if false
 */
int HPrime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (HPrime(n, i - 1));
}

/**
 * is_prime_number - prime number
 * Description: returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: number
 * Return: 1 if true, 0 if false
 */
int is_prime_number(int n)
{
	if (n < 3)
	{
		return (0);
	}
	return (HPrime(n, n - 1));
}
