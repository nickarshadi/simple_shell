#include "shell.h"

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
