#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds positive numbers
 * @argc: argument cout
 * @argv: argument value
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (a = 1; a < argc; a++)
		{
			for (b = 0; argv[a][b] != 0; b++)
			{
				if (argv[a][b] < 48 || argv[a][b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[a]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
