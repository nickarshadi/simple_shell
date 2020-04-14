#include "shell.h"

/**
 * p_l - process line which is received by getline
 * @line: received line
 * @env: environment variable
 * @head: head of file
 * @av: list of arguments
 * Return: 0 on succes, -1 if fails
 */
int p_l(char *line, char **env, list_t **head, char **av)
{
	char *command[4] = {"", "", "", ""};
	char buffer[1024 * 8], *lcommand = NULL;
	int len = 0, status, i = 0, j = 1, lene = 1;
	pid_t child_pid = 0;

	for (i = 1; i < 4; i++)
		command[i] = NULL;
	lcommand = &buffer[0];
	if (!_strcmp(line, "exit\n"))
		return (-1);
	if (!_strcmp(line, "\n"))
		return (0);
	if (!_strcmp(line, "env\n"))
	{
		for (i = 0; env[i + 1]; i++)
		{
			lene = _strlen(env[i]);
			write(1, env[i], lene);
			_putchar('\n');
		}
	} else
	{
		len = _strlen(line);
		line[len - 1] = '\0';
		command[0] = strtok(line, " ");
		command[0] = checkpath(*head, command[0], lcommand);
		while ((command[j] = strtok(NULL, " ")))
			j++;
		child_pid = fork();
		if (child_pid == -1)
			return (-1);
		else if (child_pid == 0)
		{
			if (execve(command[0], command, env) == -1)
				perror(av[0]);
			return (-1);
		}
		wait(&status);
	}
	return (0);
}
