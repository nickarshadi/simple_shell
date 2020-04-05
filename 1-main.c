#include "shell.h"

/**
 * main - test functions
 */
int main(void)
{
	list_t *head;

	head = NULL;
	listpath(&head);
	print_list(head);
	free_list(head);
	return (0);
}
