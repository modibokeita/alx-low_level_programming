#include "lists.h"
/**
  * delete_nodeint_at_index - deletes the node at inde
  * of a listint_t linked list.
  * @head: a pointer to pointer to the first node
  * @index:  the index of nodes
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int i = 0;
	listint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (-1);
	}
	while (current != NULL && i < index)
	{
		previous = current;
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1);

	previous->next = current->next;
	free(current);
	i++;

	return (-1);
}
