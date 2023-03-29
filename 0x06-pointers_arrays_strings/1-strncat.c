#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest : destination string
 * @src : source string
 * @n : int parameter
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int i;

	a = 0;
	i = 0;

	while (i < 1000)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		a++;
		i++;
	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[a + i] = src[i];
	}
	dest[a + i] = '\0';
	return (dest);
}
