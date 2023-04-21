#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);
/**
 * print_char - prints a char
 * @varg: list of characters passed to the function
 */

void print_char(va_list varg)
{
	char c;

	c = va_arg(varg, int);
	printf("%c", c);
}

/**
 * print_int - prints an int
 * @varg: list of integers passed to the function
 */

void print_int(va_list varg)
{
	int i;

	i = va_arg(varg, int);
	printf("%d", i);
}

/**
 * print_float - prints a float
 * @varg: list of floats passed to the function
 */

void print_float(va_list varg)
{
	float f;

	f = va_arg(varg, double);
	printf("%f", f);
}

/**
 * print_string - prints a string
 * @varg: list of strings passed to the function
 */

void print_string(va_list varg)
{
	char *s;

	s = va_arg(varg, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}

/**
  * print_all - prints anything of the type format
  * @format: list of types of arguments passed to the function
  */

void print_all(const char * const format, ...)
{
	va_list varg;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(varg, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].dat)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(varg);
			separator = ", ";
		}

		i++;
	}

	printf("\n");
	va_end(varg);
}
