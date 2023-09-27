#include "lists.h"
/**
  * reverse_listint -  reverses a listint_t linked list
  * @head: a pointer to pointer to the first node
  * Return: a pointer to the first node of the reversed lis
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (prev);
}
