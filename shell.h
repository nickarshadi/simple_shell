#ifndef SHELL_H
#define SHELL_H

#define _GNU_SOURCE
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/**
 * struct list_s - Struct for a singly linked list to save arguments passed to
 * the commands
 *
 * @str: Argument
 * @next: Address of the next node in the list
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
int p_l(char *line, char **env, list_t **head, char **av);
char *checkpath(const list_t *head, char *command, char *lcommand);
int _putchar(char c);
int _strlen(const char *s);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_strdup(const char *s);
char *_memcpy(char *dest, const char *src, unsigned int n);
char *remove_space(char *s);

#endif /* SHELL_H */
