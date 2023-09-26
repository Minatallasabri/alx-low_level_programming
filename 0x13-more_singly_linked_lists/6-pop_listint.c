#include "lists.h"

/**
 * pop_listint -pops head node of list
 * @head: address of pointer to first node
 *
 * Return: value of poped node
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int q;

	if (!head || !*head)
		return (0);
	node = (*head)->next;
	q = (*head)->q;
	free(*head);
	*head = node;
	return (q);
}
