#include "shell.h"

/**
 * p_l - process line which is received by getline
 * @line: received line
 * @argv: arguments
 * @env: environment variable
 * Return: 0 on succes, -1 if fails
 */
int p_l(char *line, char *argv[4], char **env, list_t **head)
{
	int j = 1;
	int len = 0, status = 0, i = 0;
	pid_t child_pid = 0;

	argv[1] = NULL;
	argv[2] = NULL;
	argv[3] = NULL;
	if (!strcmp(line, "exit\n"))
	{
		free(line);
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
		argv[0] = strtok(line, " ");
		argv[0] = checkpath(head, argv[0]);
		while ((argv[j] = strtok(NULL, "")))
			j++;
		child_pid = fork();
		if (child_pid == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("./hsh");
			}
			return (0);
		}
		wait(&status);
	}
	return (0);
}
