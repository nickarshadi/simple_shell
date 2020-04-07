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

	listpath(&head, env);
	while (1)
	{
		printf("#cisfun$ ");
		nread = getline(&line, &n, stdin);
		if (nread != -1)
		{
			if (p_l(line, env, &head) == -1)
			{
				free_list(head);
				return (0);
			}
		} else if (nread == EOF)
		{
			free_list(head);
			free(line);
			putchar('\n');
			return (0);
		}
		free(line);
		line = NULL;
		n = 0;
	}
	(void)ac;
	(void)av;
	return (0);
}
