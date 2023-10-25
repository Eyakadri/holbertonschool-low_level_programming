#include "main.h"
#include <string.h>
/**
 * rev_string - a function that reverses a string
 *@s: string
 */
void rev_string(char *s)
{
	int l, i;

	l = strlen(s);
	for (i = 0; i < l / 2; i++)
	{
		char swap = s[i];

		s[i] = s[l - i - 1];
		s[l - i - 1] = swap;
	}
}
