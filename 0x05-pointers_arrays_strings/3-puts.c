#include "main.h"

/**
 * _puts - print the string followed by new line
 * @str: pointer to be printed
 * Return: nothing
 */

void  _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
