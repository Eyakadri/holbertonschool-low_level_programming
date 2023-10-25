#include "main.h"
/**
 * puts_half -  a function that prints half of a string
 * @str: charac
*/
void puts_half(char *str)
{
	 int l = strlen(str);

printf("%s\n", str + (l + 1) / 2);
}
