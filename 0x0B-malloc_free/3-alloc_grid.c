#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimentional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: Pointer to the 2 dimentional array, or NULL if
 * width or height is 0 or negative or if it fails
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = i - 1; j >= 0; j--)
				free(array[j]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
