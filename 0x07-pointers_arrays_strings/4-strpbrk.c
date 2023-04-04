#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the bytes to be accepted
 * Return: unsigned int
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int c;

	i = 0;
	while (s[i] != '\0')
	{
		c = 0;
		while (accept[c] != '\0')
		{
			if (s[i] == accept[c])
				return (s + i);
			c++;
		}
		i++;
	}
	return (0);
}
