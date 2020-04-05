#include "shell.h"

/**
 * process_line - process getline
 */
int process_line(char *line, char *argv[2], pid_t child_pid, int len, int status, int i , char **environ)
{
	int j = 1;

	argv[1] = NULL;
	argv[2] = NULL;
	argv[3] = NULL;
	if (strcmp(line, "exit\n") == 0)
		{
			free(line);
			return (-1);
		}
		len = strlen(line);
		line[len - 1] = '\0';
		if (strcmp(line, "env") == 0)
		{
			while (environ[i + 1])
			{
				printf("%s\n", environ[i]);
				i++;
			}
		} else
		{
			argv[0] = strtok(line, " ");
			while ((argv[j] = strtok(NULL, "")))
				j++;
			child_pid = fork();
			if (child_pid == 0)
			{
				if (execve(argv[0], argv, NULL) == -1)
					{
						perror("./hsh");
					}
				return (0);
			}
			wait(&status);
		}
		return (0);
}
