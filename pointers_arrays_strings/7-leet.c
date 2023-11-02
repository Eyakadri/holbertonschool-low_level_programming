#include "main.h"
/**
 * leet -  a function that encodes a string
 * @s: char
 * Return: s
 */
char *leet(char *s)
{
	int a, b;
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (c[b] != '\0')
		{
			if (s[a] == c[b])
			{
				s[a] = d[b];
			}
			b++;
		}
		a++;
	}
	return (s);
}
