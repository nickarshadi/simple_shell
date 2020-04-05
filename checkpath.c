#include "shell.h"

/**
 * checkpath - check path
 * @head: head of pathlist
 * @command: command
 * Return: 1 on succes, -1 on failure
 */

char* checkpath(list_t **head, char *command)
{
	struct stat st;
	char *lcommand = "/bin/ls";
	list_t *node;

	node = *head;
	while(node)
	{
		lcommand = node->str;
		strcat(lcommand, "/");
		strcat(lcommand, command);
		if (!stat(lcommand, &st))
		{
			return (lcommand);
		}
		node = node->next;
	}
	(void)head;
	(void)command;
	return (command);
}
