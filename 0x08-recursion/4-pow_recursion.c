#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number of reference
 * @y: power
 * Return: the calculated value if y is 0/positive, or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
