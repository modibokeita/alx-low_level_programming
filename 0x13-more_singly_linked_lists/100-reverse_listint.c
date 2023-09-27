#include "lists.h"
/**
  * reverse_listint -  reverses a listint_t linked list
  * @head: a pointer to pointer to the first node
  * Return: a pointer to the first node of the reversed lis
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}

	*head = prev;
	return (prev);
}
