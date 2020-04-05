#include "shell.h"

/**
 * add_node_end - add node at end of linked list
 * @head: head
 * @
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !new)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		new->next = NULL;
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new;
	} else
	*head = new;
	return (new);
}
