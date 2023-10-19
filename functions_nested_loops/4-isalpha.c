#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 *@c: int value
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122 && c++)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
