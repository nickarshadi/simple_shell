#include "shell.h"
/**
 * main - shell
 * @av:
 * Return: 0 on success, 1 on error
 */
int main(int ac, char **av, char **env)
{
	char *line = NULL, *argv[4] = {"", "", "", ""};
	size_t n = 0;
	ssize_t nread = 0;

	while (1)
	{
		printf("#cisfun$ ");
		nread = getline(&line, &n, stdin);
		if (nread != -1)
		{
			if (p_l(line, argv, env) == -1)
				return (1);
		}
		free(line);
		line = NULL;
		n = 0;
	}
	(void)ac;
	(void)av;
	(void)env;
}
