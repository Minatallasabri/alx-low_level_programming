#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @head: head of doubly linked lits
 * @index: index of node
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j;

	if (head == NULL)
		return (NULL);

	for (j = 0; head != NULL && j < index; j++)
		head = head->next;

	return (head);
}
