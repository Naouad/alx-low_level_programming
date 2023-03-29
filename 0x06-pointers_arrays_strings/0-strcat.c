#include "main.h"

/**
 *_strcat - appends the src string to the dest string
 *@dest: destination string
 *@src: source string
 *Description: appends the src string to the dest string
 *Return: string
 */

char *_strcat(char *dest, char *src)
{
	int	a;
	int i;

	a = -1;
	i = 0;

	while (dest[i] != '\0')
		i++;
	do {
		a++;
		dest[i] = src[a];
		i++;
	} while (src[a] != '\0');

	return (dest);
}
