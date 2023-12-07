#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: number of letters
 * Return: actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int a, b, c;
	char *d;

	if (filename == NULL)
		return (0);
	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	d = malloc(sizeof(char) * letters);
	if (d == NULL)
		return (0);
	b = read(a, d, letters);
	if (b == -1)
		return (0);
	c = write(STDOUT_FILENO, d, b);
	if (c == -1)
		return (0);
	close(a);
	free(d);
	return (c);
}
