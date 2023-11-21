#include "lists.h"

/**
 * sum_listint - returns the sum of all the entries of
 * a listint_t linked list
 * @head: the head pointer to the last entry of the list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
	{
		return (0);
	}
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
