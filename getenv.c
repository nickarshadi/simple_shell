#include "shell.h"

/**
 * main - get environmental variable
 */
char *_getenv(const char *name)
{
	extern char **environ;
	int i = 0;
	char *token2;
	char *token3;

	while (environ[i])
	{
		token2 = strtok(environ[i], "=");
		token3 = strtok(NULL, "=");
		if (strcmp(name, token2) == 0)
			return (token3);
		i++;
	}
	return (NULL);
}
