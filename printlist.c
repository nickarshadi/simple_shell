#include "shell.h"

/**
 * print_list - print out list
 * @h: header of list
 * Return: number of printed nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%s\n", h->str);
		h = h->next;
		i++;
	}
	return (i);
}
