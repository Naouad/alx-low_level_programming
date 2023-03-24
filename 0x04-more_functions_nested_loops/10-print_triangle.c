#include "main.h"
/**
 * print_triangle - Prints diagonals
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	a = 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (a <= size)
		{
			for (c = size - a; c >= 1; c--)
			{
				_putchar(' ');
			}
			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
			a++;
		}
	}
}
