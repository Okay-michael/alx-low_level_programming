#include "lists.h"
/**
 * *reverse_listint - reverse the order of the node
 * @head: this is the head pointer
 * Return: this function returns the head pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *forward;
	listint_t *backward = NULL;

	if (head  == NULL)
		return (NULL);
	forward = *head;
	while (forward != NULL)
	{
		forward = forward->next;
		forward = (*head)->next;
		(*head)->next = backward;
		backward = *head;
		*head = forward;
	}
	*head = backward;
	return (*head);
}
