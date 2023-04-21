#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything (of any format)
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list varg;
	unsigned int i = 0;
	char *s;

	va_start(varg, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(varg, int));
				break;
			case 'i':
				printf("%d", va_arg(varg, int));
				break;
			case 'f':
				printf("%f", va_arg(varg, double));
				break;
			case 's':
				s = va_arg(varg, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				break;
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' ||
					format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(varg);
}
