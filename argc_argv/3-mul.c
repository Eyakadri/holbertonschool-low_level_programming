#include <stdio.h>
#include <stdlib.h>
/**
 * main -  a program that multiplies two numbers
 * @argc: arg count
 * @argv: arg value
 * Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int a;

	if (argc == 3)
	{
		a = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", a);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
