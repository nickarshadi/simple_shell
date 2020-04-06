#include "shell.h"

/**
 * checkpath - check path
 * @head: head of pathlist
 * @command: command
 * Return: 1 on succes, -1 on failure
 */

char *checkpath(const list_t *head, char *command)
{
	struct stat st;
	char buffer[100];
	char *lcommand = &buffer[0];
	const list_t *node = head;
	int i;

	while (node)
	{
		for (i = 0; (node->str)[i]; i++)
		{
			lcommand[i] = (node->str)[i];
		}
		for (; i < 100; i++)
		{
			lcommand[i] = '\0';
		}
		strcat(lcommand, "/");
		strcat(lcommand, command);
		if (!stat(lcommand, &st))
		{
			printf("%s\n", lcommand);
			return (lcommand);
		}
		node = node->next;
	}
	return (command);
}
