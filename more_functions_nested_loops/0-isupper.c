#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 *@c: int value
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90 && c++)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
