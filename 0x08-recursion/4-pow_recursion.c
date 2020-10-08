#include "holberton.h"

/**
 * _pow_recursion - raised to the power
 * Description: returns the value of x raised to the power of y
 * @x: value
 * @y: power
 * Return: -1 or result x raised y
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
		{
			return (1);
		}
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (-1);
	}
}
