#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to string
 * @to: pointer string to set double pointer to
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
