#include "main.h"
/**
 * _isdigit - a function that checks for a digit
 *@c: int value
 * return 1 if c is a digit or 0 for anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57 && c++)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
