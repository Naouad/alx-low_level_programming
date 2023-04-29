#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @str: Address of the string to insert into the new node.
 *
 * Return: Address of the new node.
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temperory;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	for (temperory = *head; temperory->next != NULL; temperory = temperory->next)
		;

	temperory->next = new_node;
	return (new_node);
}
