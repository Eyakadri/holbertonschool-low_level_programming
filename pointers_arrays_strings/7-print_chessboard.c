#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard
 * @a: array
 */
void print_chessboard(char (*a)[8])
{
	int i, b;

	for (i = 0; a[i][7]; i++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[i][b]);
		_putchar('\n');
	}
}
