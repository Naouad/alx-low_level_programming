#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */
size_t	print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *currents;

	for (currents = h; currents != NULL; currents = currents->next)
	{
		if (currents->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", currents->len, currents->str);
		nodes++;
	}
	return (nodes);
}
