#include "shell.h"

/**
 * _strcat - append the string src to the dest string, overwriting the\
 terminating null byte at the end of dest, and the add a terminating\
 NULL byte
 * @dest: String at the beginning
 * @src: Following string that is going to append
 * Return: Return a pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	return (dest);
}

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

/**
 * _strlen - return length of string
 * @s: string
 *
 * Return: return int containing the legth of string s
 */
int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i))
	{
		i++;
	}
	return (i);
}

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
		return (NULL);
	return ((char *) _memcpy(new, s, len));
}
