#include "lists.h"

/**
 * pop_listint - deletes the last node of a listint_t linked list
 * @head: the head of the linked list
 * Return: returns the head pointing to the the node
 * at nth position
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int k;

	if (head == NULL)
	{
		return (0);
	}
	temp = *head;
	if (temp == NULL)
	{
		return (0);
	}
	k = temp->n;
	*head = temp->next;
	free(temp);
	return (k);
}
