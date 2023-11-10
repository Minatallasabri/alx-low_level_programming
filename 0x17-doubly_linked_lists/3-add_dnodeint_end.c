#include "lists.h"
/**
  * add_dnodeint_end - add new node at the end of linked list
  * @head: the head of linked list
  * @n: the value of new node
  * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_new_node;
	dlistint_t *h;

	end_new_node = malloc(sizeof(dlistint_t));

	if (end_new_node == NULL)
		return (NULL);

	end_new_node->n = n;
	end_new_node->next = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = end_new_node;
	}
	else
		*head = end_new_node;

	end_new_node->prev = h;

	return (end_new_node);
}
