#include "shell.h"

/**
 * p_l - process line which is received by getline
 * @line: received line
 * @argv: arguments
 * @env: environment variable
 * @head: head of file
 * Return: 0 on succes, -1 if fails
 */
int p_l(char *line, char **env, list_t **head)
{
	int j = 1;
	char *command[4] = {"", "", "", ""};
	int len = 0, status = 0, i = 0;
	pid_t child_pid = 0;
	char buffer[100];
	char *lcommand = &buffer[0];

	(void)head;

	command[1] = NULL;
	command[2] = NULL;
	command[3] = NULL;
	if (!strcmp(line, "exit\n"))
	{
		free(line);
		line = NULL;
		return (-1);
	}
	len = strlen(line);
	line[len - 1] = '\0';
	if (!strcmp(line, "env"))
	{
		while (env[i + 1])
		{
			printf("%s\n", env[i]);
			i++;
		}
	} else
	{
		command[0] = strtok(line, " ");
		command[0] = checkpath(*head, command[0], lcommand);
		while ((command[j] = strtok(NULL, "")))
			j++;
		child_pid = fork();
		if (child_pid == 0)
		{
			if (execve(command[0], command, NULL) == -1)
			{
				perror("./hsh");
			}
			return (0);
		}
		wait(&status);
	}

	(void)line;
	(void)env;
	(void)head;
	return (0);
}
