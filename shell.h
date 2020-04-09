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

char *_getenv(char *name, char **env);
int printpath(char **env);
list_t *listpath(list_t **head, char **env);
list_t *add_node_end(list_t **head, char *str);
void free_list(list_t *head);
size_t print_list(const list_t *h);
int p_l(char *line, char **env, list_t **head);
char *checkpath(const list_t *head, char *command, char *lcommand);
int _putchar(char c);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);

#endif
