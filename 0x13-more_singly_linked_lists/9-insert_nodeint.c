#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *novo;
	listint_t *tp = *head;

	novo = malloc(sizeof(listint_t));
	if (!novo || !head)
		return (NULL);
	novo->n = n;
	novo->next = NULL;
	if (idx == 0)
	{
		novo->next = *head;
		*head = novo;
		return (novo);
	}
	for (count = 0; tp && count < idx; count++)
	{
		if (count == idx - 1)
		{
			novo->next = tp->next;
			tp->next = novo;
			return (novo);
		}
		else
			tp = tp->next;
	}
	return (NULL);
}
