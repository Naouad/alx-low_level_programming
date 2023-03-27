#include "main.h"

/**
 * swap_int - swap the values of a and b
 * @a: pointer num 1
 * @b: pointer num 2
 * Return: nothing
 */

void	swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
