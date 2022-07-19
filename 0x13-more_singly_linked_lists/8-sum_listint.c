#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - add up items from list
 * @head: head of list
 *
 * Return: sum of items
 */
int sum_listint(listint_t *head)
{
	int i;

	i = 0;
	if (!head)
		return (0);
	for (; head; head = head->next)
		i += head->n;
	return (i);
}
