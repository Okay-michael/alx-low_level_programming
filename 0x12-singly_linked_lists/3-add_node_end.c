#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: this is the character to print
 * @str: this is the string for the new node
 *
 * Return: it returns a new_node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *new;
	int c;

	ptr = *head;
	while (ptr && ptr->next != NULL)
		ptr = ptr->next;
	c = 0;
	while (str[c] != '\0')
		c++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = c;
	new->next = NULL;

	if (ptr)
		ptr->next = new;
	else
		*head = new;
	return (new);
}
