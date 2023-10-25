#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node listint_t list
 * @head: first node in the linked list parameter
 * @index: index of the node to be returned
 * Return: if the node not exist, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tp = head;

	while (tp && count < index)
	{
		tp = tp->next;
		count++;
	}
	return (tp ? tp : NULL);
}
