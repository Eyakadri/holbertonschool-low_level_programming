#include "main.h"
/**
 * prime - check for prime number
 * @a: int
 * @b:int
 * Return: 1 or 0
*/
int prime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime(a, b + 1));
}
/**
 * is_prime_number - a function that returns 1 if the input integer
 * @n: int
 * Return: 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
