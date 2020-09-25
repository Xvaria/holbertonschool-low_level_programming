#include "holberton.h"

/**
 * _isupper - Return 1 or 0 check character
 * Description: checks for uppercase character
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
