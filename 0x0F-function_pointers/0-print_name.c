#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name -  prints a name
 * @name: pointer to the char containing the name to be printed
 * @f: pointer to a function that takes a char pointer as
 * an argument
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
