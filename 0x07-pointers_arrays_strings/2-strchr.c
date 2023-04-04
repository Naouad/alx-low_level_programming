#include "main.h"

/**
 *_strchr - locates a character in a string
 *@s: pointer to the string to be searched
 *@c: character to be located in the string
 *Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
