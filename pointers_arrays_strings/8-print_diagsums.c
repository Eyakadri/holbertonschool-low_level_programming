#include "main.h"
/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * @a: array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i, c, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		c = (i * size) + i;
		sum1 += *(a + c);
	}
	for (i = 1; i <= size; i++)
	{
		c = (i * size) - i;
		sum2 += *(a + c);
	}
	printf("%d, %d\n", sum1, sum2);
}
