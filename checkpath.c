#include "shell.h"

/**
 * checkpath - check path
 * @head: head of pathlist
 * @command: command
 * @lcommand: buffer to store command plus path in
 * Return: 1 on succes, -1 on failure
 */

char *checkpath(const list_t *head, char *command, char *lcommand)
{
	struct stat st;
	const list_t *node = head;
	int i, len = 1024 * 8;/* set 8 kebibytes for len*/

	while (node)
	{
		for (i = 0; (node->str)[i]; i++)
		{
			lcommand[i] = (node->str)[i];
		}
		for (; i < len; i++)
		{
			lcommand[i] = '\0';
		}
		_strcat(lcommand, "/");
		_strcat(lcommand, command);
		if (!stat(lcommand, &st))
		{
			return (lcommand);
		}
		node = node->next;
	}
	return (command);
}
