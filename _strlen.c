#include "shell.h"

/**
 * _strlen - return length of string
 * @s: string
 *
 * Return: return int containing the legth of string s
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		i++;
	}
	return (i);
}