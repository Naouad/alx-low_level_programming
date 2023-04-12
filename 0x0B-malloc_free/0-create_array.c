#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char
 * @size: the size of the created array
 * @c: the char to initialize the array with
 * Return: NULL if size = 0 or if the allocation fails, a pointer
 * to the array otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size;)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
