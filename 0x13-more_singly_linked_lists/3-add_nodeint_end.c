#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node to end of list
 * @head: head of linked list
 * @n: int to add to node
 *
 * Return: Address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	for (node = *head; node->next != NULL; node = node->next)
		;
	node->next = new;
	return (*head);
}
