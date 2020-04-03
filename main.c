#include "shell.h"
/**
 * main - shell
 *
 * Return: 0 on success, 1 on error
 */
int main(void)
{
	char *line = NULL, *argv[2];
	size_t n = 0;
	pid_t child_pid;
	ssize_t nread;
	int len = 0, status;

	while (1)
	{
		printf("#cisfun$ ");
		nread = getline(&line, &n, stdin);
		if (nread != -1)
		{
			if (strcmp(line, "exit\n") == 0)
			{
				free(line);
				return (0);
			}
			len = strlen(line);
			line[len - 1] = '\0';
			argv[0] = line;
			argv[1] = NULL;
			child_pid = fork();
			if (child_pid == 0)
			{
				if (execve(argv[0], argv, NULL) == -1)
					perror("Error: ");
				return (0);
			}
			wait(&status);
		}
		free(line);
		line = NULL;
		n = 0;
	}
}
