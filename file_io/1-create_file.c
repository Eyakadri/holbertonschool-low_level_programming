#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: text content
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int a, b, c;

	if (filename == NULL)
		return (-1);
	a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (a == -1)
		return (-1);
	if (text_content != NULL)
	{
		b = 0;
		while (text_content[b] != '\0')
			b++;
		c = write(a, text_content, b);
		if (c == -1)
			return (-1);
	}
	close(a);
	return (1);
}
