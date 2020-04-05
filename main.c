#include "shell.h"
/**
 * main - shell
 *
 * Return: 0 on success, 1 on error
 */
int main(void)
{
	char *line = NULL, *argv[2] = {"", ""};
	size_t n = 0;
	pid_t child_pid = 0;
	ssize_t nread = 0;
	int len = 0, status = 0, i = 0;
	extern char **environ;

	while (1)
	{
		printf("#cisfun$ ");
		nread = getline(&line, &n, stdin);
		if (nread != -1)
		{
			process_line(line, argv, child_pid, len, status, i, environ);
		}
		free(line);
		line = NULL;
		n = 0;
	}
}
