#include "shell.h"

/**
 * listpath - Create linked list of PATH files
 */
list_t *listpath(list_t **head)
{
	char *path = _getenv("PATH"), *buf;

	buf = strtok(path, ":");
	add_node_end(head, buf);

	while ((buf = strtok(NULL, ":")) != NULL)
	{
		add_node_end(head, buf);
	}
	return (*head);
}
