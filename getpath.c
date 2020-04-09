#include "shell.h"

/**
 * printpath - print path
 * @env: environmental variables
 * Return: always 0
 */
int printpath(char **env)
{
	char *path, *node;

	path = _getenv("PATH", env);
	node = strtok(path, ":");
	printf("%s", node);
	while ((node = strtok(NULL, ":")) != NULL)
	{
		printf("%s\n", node);
	}
	return (0);
}
