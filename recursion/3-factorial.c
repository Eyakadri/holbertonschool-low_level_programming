#include "main.h"
/**
 * factorial -  a function that returns the factorial of a given number
 * @n: nmb
 * Return: -1 or 1
 */
int factorial(int n)
{
	{
		if (n < 0)
			return (-1);
	}
	{
		if (n == 0)
			return (1);
	}
	return (n * factorial(n - 1));
}
