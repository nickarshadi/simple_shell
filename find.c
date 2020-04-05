#include "shell.h"

/**
 * look for files in current PATH
 */
int main(int ac, char **av)
{
	int i = 1;
	struct stat st;
	if (ac > 1)
	{
	while (av[i])
	{
		if (stat(av[i], &st) == 0)
		{
			printf("FOUND\n");
		} else
		{
			printf("NOT FOUND\n");
		}
		i++;
	}
	}
	return (0);
}
