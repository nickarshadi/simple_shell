#include "shell.h"

/**
 * main - print environment
 * @ac: argument count
 * @av: array of arguments(strings)
 * @env: NULL terminated array of strings
 * Return: always 0
 */
int main(int ac, char **av, char **env)
{
	unsigned int i;

	i = 0;
	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
	(void)ac;
	(void)av;

	return (0);
}
