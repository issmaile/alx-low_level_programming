#include <lists.h>

/**
 * add_nodeint - add a new node at liked list head
 * @head: pointer to pointer to head
 * @n: n element
 *
 * Reeturn: address of the new elem - failed: NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return(*head);
}
