#include "main.h"
/**
 * _isdigit - a function that checks for a digit
 *@c: int value
 * Return: 0 or 1
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
