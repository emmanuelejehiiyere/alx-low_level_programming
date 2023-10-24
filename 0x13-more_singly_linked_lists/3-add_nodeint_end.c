#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a listsint_t list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element parameter
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *novo;
	listint_t *tmp = *head;

	novo = malloc(sizeof(listint_t));
	if (!novo)
		return (NULL);
	novo->n = n;
	novo->next = NULL;
	if (*head == NULL)
	{
		*head = novo;
		return (novo);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = novo;
	return (novo);
}
