#include "main.h"
/**
 * print_most_numbers - prints all unless 2 and 4
 * Return: none
 */
void print_most_numbers(void)
{
	char i;

	i = '0';

	while (i <= '9')
	{
		if (i != '2' && i != '4')
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
