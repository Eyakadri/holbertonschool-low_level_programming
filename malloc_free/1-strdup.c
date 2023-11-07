#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: string
 * Return: arr or NULL
 */
char *_strdup(char *str)
{
	char *a;
	int i, b = 0;

	if (str == NULL)
		return (NULL);
	while (str[b])
		b++;
	a = malloc(sizeof(char) * (b + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < b; i++)
		a[i] = str[i];
	a[b] = '\0';
	return (a);
}
