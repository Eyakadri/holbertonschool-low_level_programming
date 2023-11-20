#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: int
 * @size: size_t
 * @cmp: int
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && (*cmp) != NULL)
		for (i = 0; i < size; i++)
			if ((*cmp)(array[i]) != 0)
				return (i);
	return (-1);
}
