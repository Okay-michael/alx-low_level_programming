#include <stdio.h>
#include "lists.h"

/**
 * print_list - this function prints elements of a linkedlist
 * @h: this is the linked list passed
 *
 * Return: this function returns the number of elements passed
 */
size_t print_list(const list_t *h)
{
	size_t nmbr_of_nodes = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		printf("[%d] %s\n", ptr->len,
				ptr->str != NULL ? ptr->str : "(nil)");
		ptr = ptr->next;
		nmbr_of_nodes++;
	}
	return (nmbr_of_nodes);
}
