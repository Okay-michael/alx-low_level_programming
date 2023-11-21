#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: the head of the list to be traversed.
 * Return: an integer representing the number of in a list
 */
size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
