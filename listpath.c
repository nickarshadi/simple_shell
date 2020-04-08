#include "shell.h"

/**
 * listpath - Create linked list of PATH files
 * @head: head of list
 * @env: environmental variables
 * Return: list_t
 * int main(void)
 *
 *	list_t *head;
 *
 *	head = NULL;
 *	listpath(&head);
 *	print_list(head);
 *	free_list(head);
 *	return (0);
 */
list_t *listpath(list_t **head, char **env)
{
	char *path = _getenv("PATH", env), *token;

	token = strtok(path, ":");
	add_node_end(head, token);

	while ((token = strtok(NULL, ":")) != NULL)
	{
		add_node_end(head, token);
	}
	return (*head);
}
