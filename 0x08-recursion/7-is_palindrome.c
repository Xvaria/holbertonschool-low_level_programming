#include "holberton.h"

/**
 * _strsize - Count string
 * Description: count all letters of a string
 * @s: String
 * Return: size of a string to function is_palindrome
 */
int _strsize(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strsize(++s));
}

/**
 * _HPalindrome - Comparate in order an reverse
 * Description: comparate string in order and reverse for return 1 or 0
 * @str: String
 * @i: initial position
 * @f: size string
 * Return: 1 to palindrome 0 if not
 */
int _HPalindrome(char str[], int i, int f)
{
	if (i == f)
	{
		return (1);
	}
	if (str[i] != str[f])
	{
		return (0);
	}
	if (i < f + 1)
	{
		return (_HPalindrome(str, i + 1, f - 1));
	}
	return (1);
}

/**
 * is_palindrome - save count and string
 * Description: returns to HPalindrome
 * @s: String
 * Return: function HPalindrome
 */
int is_palindrome(char *s)
{
	int size = _strsize(s) - 1;
	return (_HPalindrome(s, 0, size));
}
