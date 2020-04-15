#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shell.h"

/**
 * _memcpy - Copy n bytes from memory area src to memory area dest
 * @dest: destination
 * @src: source
 * @n: stringlength
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, const char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
