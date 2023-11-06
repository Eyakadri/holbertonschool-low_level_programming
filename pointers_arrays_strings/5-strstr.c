#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int hayst = strlen(haystack);
	int needl = strlen(needle);

	for (int a = 0; a <= hayst - needl; a++)
	{
		int b;

		for (b = 0; b < needl; b++)
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
		}
		if (b == needl)
		{
			return (&haystack[a]);
		}
	}

	return (NULL);
}
