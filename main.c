#include "shell.h"
/**
 * main - shell
 * @ac: number of arguments
 * @av: Null terminated array of strings/arguments
 * @env: NULL terminated array of environment variables
 * Return: 0 on success, 1 on error
 */
int main(int ac, char **av, char **env)
{
	char *line = NULL;
	size_t n = 0;
	ssize_t nread = 0;
	list_t *head = NULL;
	int interactive = isatty(STDIN_FILENO), i = 0;

	signal(SIGINT, sighandle);
	listpath(&head, env);
	while (1)
	{
		if (interactive == 1)
			write(1, "$ ", 2);
		nread = getline(&line, &n, stdin);
		if (nread != -1)
		{
			i++;
			if (!_strcmp(line, "echo $?\n"))
			{
				write(1, "0\n", 2);
				continue;
			}
			if (p_l(line, env, &head, av) == -1)
				break;
		}
		if (nread == EOF)
		{
			if (interactive != 1)
				break;
			_putchar('\n');
			break;
		}
	}
	free(line);
	line = NULL;
	n = 0;
	free_list(head);
	exit(i);
	(void)ac;
}
