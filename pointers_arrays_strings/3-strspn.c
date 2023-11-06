#include "main.h"
/**
 * _strspn -  a function that gets the length of a prefix substring
 * @s: substring
 * @accept: char
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	int i = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] != '\0')
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (s[a] == accept[a])
					i++;
			}
		}
		else
			return (i);
	}
	return (i);
}
