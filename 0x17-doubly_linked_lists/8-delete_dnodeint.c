#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of a doubly linked list
 * @head: head of doubly linked
 * @index: index of node
 * Return: 1 if succeeded, else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *minlist = *head, *tmp = *head;
	unsigned int length = 0, j;

	if (head == NULL || *head == NULL)
		return (-1);

	while (tmp->next != NULL)
	{
		length++;
		tmp = tmp->next;
	}
	length++;

	if (index == 0)
	{
		*head = minlist->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(minlist);
		return (1);
	}

	for (j = 0; minlist != NULL && j < index; j++)
		minlist = minlist->next;
	if (minlist == NULL)
		return (-1);
	minlist->prev->next = minlist->next;
	if (minlist->next != NULL)
		minlist->next->prev = minlist->prev;
	free(minlist);
	return (1);
}
