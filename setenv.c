#include "shell.h"

/**
 * _setenv - Write a function that changes or adds an
 * environment variable (withour using setenv)
 * @name: variable name to be added
 * @value: value of environment variable
 * @overwrite: if 0 then the value of name is overwritten,
 * if not than not
 * Return: 0 on succes, -1 on error
 */
int _setenv(const char *name, const char *value, int overwrite)
{
	extern char **environ;
	int i = 0;
	char *buf, buf1;

	while (environ[i])
	{
		buf = strtok(environ[i], "=");
		if (!strcmp(buf, name))
		{

		}
	}

}
