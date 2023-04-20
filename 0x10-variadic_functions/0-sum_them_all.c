#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: parameter to be added
 * Return: the sum of the parameters, OR 0 if n is null
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list varg;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(varg, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(varg, int);
	}

	va_end(varg);
	return (sum);
}
