#include "holberton.h"

/**
 * create_file - create a file
 * @filename: name to the file
 * @text_content: string to file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int a, e, l = 0;

	if (!filename)
		return (-1);
	a = open(filename, O_RDWR | O_CREAT | O_TRUNC, 600);
	if (a == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[l])
			l++;
		e = write(a, text_content, l);
		if (e == -1)
		{
			return (-1);
		}
	}
	close(a);
	return (1);
}
