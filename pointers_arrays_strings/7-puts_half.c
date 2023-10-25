#include "main.h"
/**
 * puts_half -  a function that prints half of a string
 * @str: charac
*/
void puts_half(char *str)
{
	 int length = strlen(str);

printf("%s\n", str + (length + 1) / 2);
}
