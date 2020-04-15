#include "shell.h"

/**
 * _getenv - get environmental variable
 * @name: name you search
 * @env: environmental variables
 * Return: return value of env-variablename
 */
char *_getenv(char *name, char **env)
{
	int i = 0;
	char *token;
	char *token1;

	while (env[i])
	{
		token = strtok(env[i], "=");
		token1 = strtok(NULL, "=");
		if (_strcmp(name, token) == 0)
		{
			if (token1 == NULL)
				return (" ");
			return (token1);
		}
		i++;
	}
	return (NULL);
}
