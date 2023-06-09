#include "main.h"
/**
 * print_array - prints n elements of an intgers array
 * @a: array pointer
 * @n: integer
 * Description: Numbers must be separated by comma and space
 * Numbers should be displayed in the same order they are stored in array
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
