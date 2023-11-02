#include "main.h"
/**
 * *string_toupper - a function that changes all lowercase letters
 *@a: char
 * Return: a
 */
char *string_toupper(char *a)
{
	int i = 0;

	if (*a != '\0')
	{
		while (*(a + i) != '\0')
		{
			if (*(a + i) <= 'z' && *(a + i) >= 'a')
				*(a + i) -= 32;
			i++;
		}
	}
	return (a);
}
