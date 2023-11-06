#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: NULL
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *a = haystack;
		char *b = needle;

		while (*a && *b && *a == *b)
		{
			a++;
			b++;
		}

		if (*b == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
