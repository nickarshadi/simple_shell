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
	char *token = NULL;
	char *token1 = NULL;
	char *copy = NULL, *copy2 = NULL;

	while (env[i])
	{
		copy = _strdup(env[i]);
		token = strtok(copy, "=");
		token1 = strtok(NULL, "=");
		if (_strcmp(name, token) == 0)
		{
			if (token1 == NULL)
			{
				free(copy);
				return (" ");
			}
			copy2 = _strdup(token1);
			free(copy);
			return (copy2);
		}
		i++;
		free(copy);
		copy = NULL;
	}
	return (NULL);
}
