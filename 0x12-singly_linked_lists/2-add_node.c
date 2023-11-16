#include <string.h>
#include "lists.h"

/**
 * *add_node - adds a node to a linked list head
 * @head: this is the linked list head
 * @str: this is the string member of the linked list
 * Return: it returns the  number of elements
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int length;

	new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	length = 0;
	while (str[length] != '\0')
		length++;

	new_node->len = length;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
