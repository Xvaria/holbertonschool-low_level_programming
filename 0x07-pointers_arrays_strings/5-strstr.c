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

	while (haystack[a])
	{
		while (needle[b] && (haystack[a] == needle[0]))
		{
			if (haystack[a + b] == needle[b])
			{
				b++;
			}
			else
			{
				break;
			}
		}
		if (needle[b])
		{
			a++;
			b = 0;
		}
		else
		{
			return (haystack + a);
		}
	}
	return (0);
}
