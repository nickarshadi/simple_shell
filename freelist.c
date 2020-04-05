#include "shell.h"
/**
 * free_list - free a leist from heap
 * @head: head
 */
void free_list(list_t *head)
{
	list_t *node, *node1;

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
