#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * string_nconcat - Concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: Maximum number of bytes of `s2` to concatenate
 * Return: On success, a pointer to the concatenated string. On failure, NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, concat_len;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	concat_len = (s2_len < n) ? s1_len + s2_len : s1_len + n;

	concat = malloc(sizeof(char) * (concat_len + 1));
	if (concat == NULL)
		return (NULL);

	memcpy(concat, s1, s1_len);
	memcpy(concat + s1_len, s2, concat_len - s1_len);
	concat[concat_len] = '\0';

	return (concat);
}
