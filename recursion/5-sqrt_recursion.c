#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural square root
 * @n: nmbr
 * Return: -1 , i ot 1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		int i = 1;

		while (i * i <= n)
		{
			i++;
		}
		i--;
		return (i);
	}
}
