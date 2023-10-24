#include "lists.h"
/**
 * listint_len - returns the num of elements in a linked listint_t list
 * @h: linked list of type listint_t parameter
 * Return: num of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
