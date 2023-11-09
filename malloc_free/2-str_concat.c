#include "main.h"

char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	c = malloc(len1 + len2 + 1);
	strcpy(c, s1);
	strcat(c, s2);
	return (c);
}
