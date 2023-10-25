#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of linked list
 * @head: first element in the list parameter
 * @index: index of the node to delete
 * Return: 1 if it Succeeded, or -1 if it Failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tp = *head;
	listint_t *crt = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tp);
		return (1);
	}
	while (count < index - 1)
	{
		if (!tp || !(tp->next))
			return (-1);
		tp = tp->next;
		count++;
	}
	crt = tp->next;
	tp->next = crt->next;
	free(crt);
	return (1);
}
