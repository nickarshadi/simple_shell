#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shell.h"

/**
 * _memcpy - Copy n bytes from memory area src to \
 memory area dest
 * @dest: destination
 * @src: source
 * @n: strlen
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, const char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
