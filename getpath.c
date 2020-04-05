#include "shell.h"

/**
 *
 */
int printpath(void)
{
	char *path, *buf;

	path =_getenv("PATH");
	buf = strtok(path, ":");
	printf("%s", buf);
	while ((buf = strtok(NULL, ":")) != NULL)
	{
		printf("%s\n", buf);
	}
	return (0);
}
