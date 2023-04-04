#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the pointer to the memory area to be filled
 * @b: the constant byte to fill the memory with
 * @n: number of bytes to be filled
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
