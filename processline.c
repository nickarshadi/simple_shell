#include "shell.h"

/**
 * process_line - process getline
 */
void process_line(char *line, char *argv[2], pid_t child_pid, int len, int status, int i , char **environ)
{
	if (strcmp(line, "exit\n") == 0)
			{
				free(line);
				exit(99);
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
			}
			else
			{
			argv[0] = line;
			argv[1] = NULL;
			child_pid = fork();
			if (child_pid == 0)
			{
				if (execve(argv[0], argv, NULL) == -1)
					perror("./hsh");
				return;
			}
			wait(&status);
			}
}
