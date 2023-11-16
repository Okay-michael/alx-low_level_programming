#include <stdio.h>
#include "lists.h"

/**
 * list_len -  returns the number of elements in a list_t list.
 * @h: linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;
	const list_t *pter = h;

	while (pter != NULL)
	{
		pter = pter->next;
		size++;
	}
	return (size);
}
