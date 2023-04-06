#include "main.h"

/**
 * _sqrt_helper - returns the natural square root of a number
 * @n: number to calculate the natural square root of
 * @i: guess to try as the square root
 * Return: the natural square root of n, or -1 if n has no natural square root
 */

int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);

	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the natural square root of
 * Return: the natural square root of n, or -1 if n has no natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
