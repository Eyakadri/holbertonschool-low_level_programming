#include "main.h"
/**
 * _islower - function that checks for lowercase character
 *@c: int value
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122 && c++)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
