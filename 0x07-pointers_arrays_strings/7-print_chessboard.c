#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the chessboard array
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = 0;
	for (; i < 8; )
	{
		j = 0;
		for (; j < 8; )
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
