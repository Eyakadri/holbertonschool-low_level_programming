#ifndef print_name
#define print_name

#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - a function that prints a name
 * @name: char
 * @f: .
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && (*f) != NULL)
		(*f)(name);
}
#endif 
