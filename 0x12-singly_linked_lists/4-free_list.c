#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: list_t list to be freed.
 */
void free_list(list_t *head)
{
	list_t *temperory;

	for (temperory = head; temperory != NULL; )
	{
		list_t *next = temperory->next;

		free(temperory->str);
		free(temperory);
		temperory = next;
	}
}
