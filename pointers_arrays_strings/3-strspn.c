#include "main.h"
/**
 * _strspn -  a function that gets the length of a prefix substring
 * @s: substring
 * @accept: char
 * Return: b
 */
unsigned int _strspn(char *s)
{
	{
		int a, b = 0;

		while (s[a] != '\0' && b == 0)
		{
			b = s[a] - s[a];
			a++;
		}
		return (b);
	}
}
