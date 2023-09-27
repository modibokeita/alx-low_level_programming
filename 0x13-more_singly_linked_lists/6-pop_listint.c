#include "lists.h"
/**
  * pop_listint - deletes the head node of a listint_t
  * linked list, and returns
  * the head node’s data (n).
  * @head: a pointer to pointer to the first need
  * Return: the head node’s data (n)
  */
int pop_listint(listint_t **head)
{
	int data;

	listint_t *temp = *head;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;

	free(*head);

	*head = temp;

	return (data);
}
