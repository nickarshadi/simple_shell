#include "shell.h"

/**
 * _strcmp - compare two strings
 * @s1: string1
 * @s2: string2
 *
 * Return: 0 if equal, else less or more
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
