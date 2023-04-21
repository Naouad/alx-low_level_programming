#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>

/**
 * struct printer - A new struct type defining a printer.
 * @dat: represents a data type
 * @print: A function pointer to a function
 */

typedef struct printer
{
	char *dat;
	void (*print)(va_list varg);
} printer_t;
/** prototypes */

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char);
#endif
