#include "main.h"

/**
 * *cap_string - capitalizes all words of a string.
 * @s: input string
 * Return: string
 */

char *cap_string(char *s)
{
	int i = 0;
	int j;

	char a[] = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] = s[0] - 32;
		for (j = 0; a[j] != '\0'; j++)
			if (s[i] == a[j] && s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] = s[i + 1] - 32;
		i++;
	}
	return (s);
}
