#include "shell.h"
/**
 * free_list - free a list from heap
 * @head: head
 */
void free_list(list_t *head)
{
	list_t *node = NULL, *node1 = NULL;

	if (!head)
		return;
	node = head;
	while (node)
	{
		node1 = node->next;
		free(node->str);
		free(node);
		node = node1;
	}
}
