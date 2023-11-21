#include "lists.h"

/**
 * free_listint2 - frees the list
 * Description: frees the list and points
 * the head to NULL
 * @head: this is the head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
