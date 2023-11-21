#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: this is the pointer to the head node
 * Return: the number of nodes in the
 * list
 */
size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		cnt = cnt + 1;
		h = h->next;
	}
	return (cnt);
}
