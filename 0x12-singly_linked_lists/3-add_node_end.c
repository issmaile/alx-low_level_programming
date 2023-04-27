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
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);

	*head->next = new_node;

	return (new_node);
}
