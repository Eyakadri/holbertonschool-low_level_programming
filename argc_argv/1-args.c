#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it
 * @argc: argument cout
 * @argv: argument value
 * Return: 0
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
