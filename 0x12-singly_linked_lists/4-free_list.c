#include "main.h"

/**
 * free_list - frees list
 * @head: list head
 *
 * Return: void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
