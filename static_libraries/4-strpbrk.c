#include "main.h"
#include <stddef.h>
/**
 * _strpbrk -  a function that searches a string
 * @s: string
 * @accept: char
 * Return: a or null
 */
char *_strpbrk(char *s, char *accept)
{
	{
		char *a, *b;

		for (a = s; *a != '\0'; a++)
		{
			for (b = accept; *b != '\0'; b++)
			{
				if (*a == *b)
				{
					return (a);
				}
			}
		}

		return (NULL);
	}
}
