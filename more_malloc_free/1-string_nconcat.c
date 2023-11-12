#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate to s1
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a, b, c;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	}
	if (n >= b)
	{
		n = b;
	}
	ptr = malloc(sizeof(char) * (a + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < a; c++)
	{
		ptr[c] = s1[c];
	}
	for (c = 0; c < n; c++)
	{
		ptr[c + a] = s2[c];
	}
	ptr[c + a] = '\0';
	return (ptr);
}
