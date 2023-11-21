#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at the nth position
 * @head: the head pointer to the last node of the list
 * @index: is the index of the node to be be returned
 * Return: a node to the nth index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	if (head == NULL)
	{
		return (0);
	}
	temp = head;
	while (index)
	{
		temp = temp->next;
		index--;
		if (temp == NULL)
		{
			return (0);
		}
	}
	return (temp);
}
