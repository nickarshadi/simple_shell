#ifndef SHELL_H
#define SHELL_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <unistd.h>

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct list_s
{
    char *str;
    struct list_s *next;
} list_t;

char *_getenv(const char *name);
int printpath(void);
list_t *listpath(list_t **head);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
size_t print_list(const list_t *h);
int process_line(char *line, char *argv[2], pid_t child_pid, int len, int status, int i , char **environ);

#endif
