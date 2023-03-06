/**
 * print_chessboard - a function that prints a chessboard
 * @a: a pointer to an input
 * Return: 0 always
 */

#include "main.h"

void print_chessboard(char (*a)[8])
{
	unsigned int i, j = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			j = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - j]);
	}
	_putchar('\n');
}
