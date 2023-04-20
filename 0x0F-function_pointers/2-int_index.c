#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to the array
 * @size: the size of the array
 * @cmp: pointer to the function that compares values
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0,
 * -1 if no element matches or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
