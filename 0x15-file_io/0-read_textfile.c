#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to the name
 * @letters: characters to print
 * Return: e or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int a, l, e;
	char *b = NULL;

	if (!filename)
		return (0);
	b = malloc(letters + 1);
	if (!b)
		return (0);
	a = open(filename, O_RDONLY, 600);
	if (a == -1)
	{
		free(b);
		return (0);
	}
	l = read(a, b, letters);
	if (l == -1)
	{
		free(b);
		return (0);
	}
	b[letters] = '\0';
	e = write(STDOUT_FILENO, b, l);
	if (e == -1)
	{
		free(b);
		return (0);
	}
	free(b);
	close(a);
	return (e);
}
