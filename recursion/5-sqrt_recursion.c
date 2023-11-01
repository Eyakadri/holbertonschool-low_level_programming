#include "main.h"
/**
 * support_fonction - check code
 * @a: int
 * @b: int
 * Return: b or -1
 */
int support_fonction(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	{
		return (support_fonction(a, b + 1));
	}
}
/**
 * _sqrt_recursion - a function that returns the natural square
 * @n: nmbr
 * Return: -1
*/
int _sqrt_recursion(int n)
{
	if (n > 0)
	{
		return (support_fonction(n, 1));
	}
	else
	{
		return (-1);
	}
}
