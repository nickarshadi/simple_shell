#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shell.h"

/**
 * _strdup - duplicate string s in heap and return its address
 * @s: string to duplicate
 * Return: return pointer to new allocated string
 */
char *_strdup(const char *s)
{
	size_t len = _strlen(s) + 1;
	void *new = malloc(len);

	if (!new)
		return NULL;
	return (char *) _memcpy(new, s, len);
}
