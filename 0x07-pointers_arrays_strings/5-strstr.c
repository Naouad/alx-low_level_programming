#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to search for
 * Return: pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack; )
	{
		char *src = haystack;
		char *i = needle;

		for (; *haystack && *i && *haystack == *i; )
		{
			haystack++;
			i++;
		}
		if (!*i)
			return (src);
		haystack = src + 1;
	}
	return (0);
}
