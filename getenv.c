#include "shell.h"

/**
 * _getenv - get environmental variable
 * @name: name you search
 * @env: environmental variables
 * Return: return value of env-variablename
 */
char *_getenv(const char *name, char **env)
{
	int i = 0;
	char *token2;
	char *token3;

	while (env[i])
	{
		token2 = strtok(env[i], "=");
		token3 = strtok(NULL, "=");
		if (strcmp(name, token2) == 0)
			return (token3);
		i++;
	}
	return (NULL);
}
