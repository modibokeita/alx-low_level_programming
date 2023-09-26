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
	listint_t *temp = *head;
	int data = temp->n;

	if (*head == NULL)
		return (0);

	*head = (*head)->next;

	free(temp);

	return (data);
}
