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
	size_t num_of_elems = 0;
	const list_t *pter = h;

	while (pter != NULL)
	{
		pter = pter->next;
		num_of_elems++;
	}
	return (num_of_elems);
}
