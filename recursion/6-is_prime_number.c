#include "main.h"

int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	int i = 2;
	for (i <= n / 2)
	{
		if (n % i == 0)
		{
			return (0);
		}
		{
			i++;
		}
	}
	return (1);
}
