#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name to the file
 * @text_content: string to be appended
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, e, l = 0;

	if (!filename)
		return (-1);
	a = open(filename, O_WRONLY | O_APPEND);
	if (a == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[l])
			l++;
		e = write(a, text_content, l);
		if (e == -1)
			return (-1);
	}
	close(a);
	return (1);
}
