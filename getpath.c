#include "shell.h"

/**
 * printpath - print path
 * @env: environmental variables
 * Return: always 0
 */
int printpath(char **env)
{
	char *path, *buf;

	path = _getenv("PATH", env);
	buf = strtok(path, ":");
	printf("%s", buf);
	while ((buf = strtok(NULL, ":")) != NULL)
	{
		printf("%s\n", buf);
	}
	return (0);
}
