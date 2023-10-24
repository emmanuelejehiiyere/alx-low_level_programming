#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the first node
 * @n: data to insert in that novo node
 * Return: pointer to the new node, NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *novo;

	novo = malloc(sizeof(listint_t));
	if (!novo)
		return (NULL);
	novo->n = n;
	novo->next = *head;
	*head = novo;
	return (novo);
}
