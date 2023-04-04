#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * @dest: pointer to destination memory area
 * @src: pointer to source memory area
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
