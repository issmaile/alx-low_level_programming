#include "lists.h"

/**
 * add_node_end - adds a node at the end of list_t linked list
 * @head: list head
 * @str: str to dupe
 *
 * Return: the address of the new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;

	temp = *head;

	if (temp == NULL)
	{
		temp = new_node;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
