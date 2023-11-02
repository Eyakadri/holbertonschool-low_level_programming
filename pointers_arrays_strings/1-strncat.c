#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: char
 * @src: char
 * @n: int
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
