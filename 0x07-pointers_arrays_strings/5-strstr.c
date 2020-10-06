#include "holberton.h"

/**
 * _strstr - locate
 * Description: locates a substring
 * @haystack: string
 * @needle: Compare to
 * Return: s or null
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;

	while (haystack[a] != '\0')
	{
		while (needle[b] != '\0')
		{
			if (haystack[a] == needle[b])
			{
				a++;
				b++;
			}
			else
			{
				haystack++;
			}
		}
	}
	if (a == b)
	{
		return (haystack);
	}
	else
	{
		return ('\0');
	}
}
