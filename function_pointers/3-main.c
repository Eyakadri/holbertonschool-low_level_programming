#include "3-calc.h"

/**
 * main - a program that performs simple operations
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, c;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = f(a, b);
	printf("%d\n", c);
	return (0);
}
