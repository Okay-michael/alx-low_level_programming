#include "lists.h"

/**
 * *add_nodeint_end - adds a node at the end
 * of the list
 * @head: the head pointer
 * @n: the integer value to be add at the end of the
 * list
 * Return: NULL is returned if this function fails, otherwise
 * otherwise it returns a pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *New;
	listint_t *tmpr = *head;

	New = malloc(sizeof(listint_t));
	if (New == NULL)
		return (NULL);
	New->n = n;
	if (*head == NULL)
		*head = New;
	else
	{
		while (tmpr->next != NULL)
		{
			tmpr = tmpr->next;
		}
		tmpr->next = New;
	}
	return (New);
}

