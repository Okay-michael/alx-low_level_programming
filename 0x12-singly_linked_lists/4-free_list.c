#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of linked list to be freed
 */
void free_list(list_t *head)
{
	list_t *ptr;
	list_t *nxt;

	ptr = head;
	while (ptr != NULL)
	{
		nxt = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = nxt;
	}
}
