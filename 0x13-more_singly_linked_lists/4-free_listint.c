#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: listint_t list to be freed
 * Return: void (nothing)
 */
void free_listint(listint_t *head)
{
	listint_t *tp;

	while (head)
	{
		tp = head->next;
		free(head);
		head = tp;
	}
}
