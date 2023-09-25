#include "lists.h"
/**
  * free_listint2 - frees a listint_t list
  * @head: a pointer to pointer to the first node
  * Return: 0
  */
void free_listint2(listint_t **head)
{

	listint_t *current;
	listint_t *temp;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}
