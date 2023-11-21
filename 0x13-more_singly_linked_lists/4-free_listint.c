#include "lists.h"

/**
 * free_listint - frees the memories allocated
 * @head: this is the pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
