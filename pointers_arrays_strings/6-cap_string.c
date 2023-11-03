#include "main.h"
/**
 * cap_string -  a function that capitalizes all words of a string
 * @s: string
 * Return: s
 */
char *cap_string(char *s)
{
	int a, capitalize, b = 0;

	while (*(s + b))
		b++;
	if (s[0] <= 'z' && s[0] >= 'a')
		s[0] -= 32;
	for (a = 0; a < b; a++)
	{
		if (s[a] == '\t' || s[a] == '\n')
			capitalize = 1;
		else if (s[a] == ' ' || s[a] == '.')
			capitalize = 1;
		else if (s[a] == ',' || s[a] == ';')
			capitalize = 1;
		else if (s[a] == '!' || s[a] == '?')
			capitalize = 1;
		else if (s[a] == '(' || s[a] == ')')
			capitalize = 1;
		else if (s[a] == '{' || s[a] == '}')
			capitalize = 1;
		else if (s[a] <= 'z' && s[a] >= 'a' && capitalize != 0)
		{
			s[a] -= 32;
			capitalize = 0;
		}
		else
			capitalize = 0;
	}
	return (s);
}
