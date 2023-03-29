#include "main.h"

/**
 * _strcmp - compare two string
 * @s1 : first string
 * @s2 : second string
 * Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int a;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	a = s1[i] - s2[i];
	return (a);
}
