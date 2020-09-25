#include "holberton.h"

/**
 * _isdigit - Return 1 or 0 check digit
 * Description: checks for a digit 0 to 9
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
