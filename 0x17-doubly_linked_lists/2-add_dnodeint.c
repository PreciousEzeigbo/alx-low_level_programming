#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_dnodeint - Adds a new node at the beginning
  * of a doubly linked list
  * @head: The head of the doubly linked list
  * @n: The number to place in the new node
  *
  * Return: The new head of the doubly linked list
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node_ = NULL;

	new_node_ = malloc(sizeof(dlistint_t));
	if (new_node_ == NULL)
		return (NULL);

	new_node_->n = n;
	if (*head)
	{
		new_node_->next = *head;
		new_node_->prev = (*head)->prev;
		(*head)->prev = new_node_;
		*head = new_node_;
		return (*head);
	}

	new_node_->next = *head;
	new_node_->prev = NULL;
	*head = new_node_;
	return (*head);
}
