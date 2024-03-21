#include <stdlib.h>
#include "lists.h"

/**
  * add_dnodeint_end - Adds a new node at the end
  * of a doubly linked list
  * @head: The head of the doubly linked list
  * @n: The number to place in the new node
  *
  * Return: The new head of the doubly linked list
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = NULL, *new_node_ = NULL;

	new_node_ = malloc(sizeof(dlistint_t));
	if (new_node_ == NULL)
		return (NULL);

	new_node_->n = n;
	if (*head)
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		new_node_->next = NULL;
		new_node_->prev = current;
		current->next = new_node_;
		return (new_node_);
	}

	new_node_->next = *head;
	new_node_->prev = NULL;
	*head = new_node_;
	return (*head);
}
