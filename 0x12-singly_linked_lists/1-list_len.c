#include "lists.h"

/**
 * list_len - Calculate the number of elements.
 * @h: Pointer to a list.
 *
 * Return: Number of nodes in the list.
 **/
size_t	list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *temperory;

	for (temperory = h; temperory != NULL; temperory = temperory->next)
	{
		count++;
	}

	return (count);
}
