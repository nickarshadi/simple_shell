#include "shell.h"

/**
 *
 */
int main (int ac, char **av, char **env)
{
	(void)ac;
	(void)av;
	(void)env;
	_getenv(FOO, 10, 0);
	return (0);
}
