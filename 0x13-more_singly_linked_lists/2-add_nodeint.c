#include "lists.h"

/**
 * add_nodeint - adds a  node at the beginning of the list
 * @head: the head pointer
 * @n: this parameter is the integer part of the node
 * to be added
 * Return: a null  if it fails or an address to the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *New;

	New = malloc(sizeof(listint_t));
	if (New == NULL)
		return (NULL);
	New->next = *head;
	New->n = n;
	*head = New;
	return (New);
}
