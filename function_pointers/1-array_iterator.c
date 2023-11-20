#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function
 * @array: int
 * @size: size_t
 * @action: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array != NULL && (*action) != NULL)
		for (a = 0; a < size; a++)
			(*action)(array[a]);
}
