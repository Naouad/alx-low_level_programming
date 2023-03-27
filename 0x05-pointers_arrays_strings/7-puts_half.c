#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: the given string
 * Return: nothing
 */

void puts_half(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
		i++;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
