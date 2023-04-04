#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: the bytes to be accepted
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		for (; accept[j] != s[i]; )
		{
			if (accept[j] == '\0')
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
