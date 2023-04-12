#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a new string which
 * is a duplicate of the string
 * @str: the string to be duplicated
 * Return: on success, a pointer to the new allocated duplicated string.
 * If str = NULL or if the memory allocation fails, return NULL.
 */

char *_strdup(char *str)
{
	char *new_s;

	if (str == NULL)
		return (NULL);

	new_s = malloc(strlen(str) + 1);

	if (new_s == NULL)
		return (NULL);

	strcpy(new_s, str);
	return (new_s);
}
