#include "lists.h"

/**
 * find_listint_loop - find the lopp in a linked list
 * @head: head
 *
 * Return: & of the node where the loops begins
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *list_traverser, *previous_node;
	bool condition_a;

	list_traverser = head;
	previous_node = head;
	while (head && list_traverser && list_traverser->next)
	{
		head = head->next;
		list_traverser = list_traverser->next->next;
		if (head == list_traverser)
		{
			head = previos_node;
			previous_node = list_traverser;
			while (1)
			{
				list_traverser = previous_node;
				condition_a = list_traverser->next != head;
				while (condition_a && (list_traverser->next != previous_node))
				{
					list_traverser = list_traverser->next;
				}
				if (list_traverser->next == head)
					break;

				head = head->next;
			}
			return (list_traverser->next);
		}
	}
	return (NULL);
}
