#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array
 * @a: int
 * @n: int
 */
void reverse_array(int *a, int n)
{
	int b;
	int c;

	b = 0;
	n = n - 1;
	while (b < n)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
		b++;
		n--;
	}
}
