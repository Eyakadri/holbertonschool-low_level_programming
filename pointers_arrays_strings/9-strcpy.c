#include "main.h"
/**
 * _strcpy - a function that copies the string pointed
 * @src: integer
 * @dest: integer
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int n, i;

	n = strlen(src);

	for (i = 0; i <= n; i++)
		dest[i] = src[i];
	return (dest);
}
