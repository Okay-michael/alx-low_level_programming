#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of a linkedlist
 * @h: this is the linked list passed
 *
 * Return: this function returns the number of elements passed
 */
size_t print_list(const list_t *h)
{
	size_t size_of_nodes = 0;
	const list_t *pter = h;

	while (pter != NULL)
	{
		printf("[%d] %s\n", pter->len,
				pter->str != NULL ? pter->str : "(nil)");
		pter = pter->next;
		size_of_nodes++;
	}
	return (size_of_nodes);
}
