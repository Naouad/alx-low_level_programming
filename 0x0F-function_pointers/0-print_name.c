#include "function_pointers.h"

/**
 * print_name -  prints a name
 * @name: pointer to the char containing the name to be printed
 * @f: pointer to a function that takes a char pointer as
 * an argument
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
