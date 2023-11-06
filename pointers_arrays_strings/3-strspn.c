#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: substring
 * @accept: char
 * Return: count
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int a = 0;
	int b = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	while (accept[b] != '\0')
	{
		b++;
	}
	for (i = 0; i < a; i++)
	{
		int found = 0;

		for (j = 0; j < b; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found)
		{
			count++;
		}
		else
		{
			break;
		}
	}
	return (count);
}
