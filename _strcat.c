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
	while(*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	return (dest);
}
