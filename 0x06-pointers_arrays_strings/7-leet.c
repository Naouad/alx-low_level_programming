#include "main.h"

/**
 * leet - encode leet coding
 * @s: input string
 * Return: a string
 */

char *leet(char *s)
{
	int i;
	int a;
	char enc[] = "ol_ea__t";

	i = 0;

	while (s[i] != '\0')
	{
		for (a = 0; enc[a] != '\0'; a++)
		{
			if (s[i] == enc[a] || s[i] == (enc[a] - 32))
			{
				s[i] = a + '0';
			}
		}
		i++;
	}
	return (s);
}
