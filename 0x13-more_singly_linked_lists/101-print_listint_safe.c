#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head
 *
 * Returns: void
 */
void free_listp(listp_t **head)
{
	listp_t *current_node;
	listp_t *next_node;

	if (head != NULL)
	{
		current_node = *head;
		while ((next_node = current_node) != NULL)
		{
			current_node = current_node->next;
			free(next_node);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list safely
 * @head: head
 *
 * Return: nodes count in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	listp_t *node_ptrs_head = NULL;
	listp_t *new_node_ptr, *current_node_ptr;

	while (head != NULL)
	{
		new_node_ptr = malloc(sizeof(listp_t));
		if (new_node_ptr == NULL)
			exit(98);

		new_node_ptr->p = (void *)head;
		new_node_ptr->next = node_ptrs_head;
		node_ptrs_head = new_node_ptr;

		current_node_ptr = node_ptrs_head;
		while (current_node_ptr->next != NULL)
		{
			current_node_ptr = current_node_ptr->next;
			if (head == current_node_ptr->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&node_ptrs_head);
				return (num_nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num_nodes++;
	}

	free_listp(&node_ptrs_head);
	return (num_nodes);
}

