#include "holberton.h"

/**
 * HSqrt - function for _sqrt_recursion
 * @n: number
 * @i: count
 * Return: -1 or i
 */

int HSqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (HSqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Square root
 * Description: returns the natural square root of a number
 * @n: number
 * Return: -1 or square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (HSqrt(n, 1));
}
