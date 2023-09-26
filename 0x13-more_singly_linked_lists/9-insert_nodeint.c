#include "lists.h"
/**
  * insert_nodeint_at_index - that inserts a new node
  * at a given position.
  * @head: a point to pointer to the first node
  * @idx: index of nodes
  * @n: new node to be added
  * Return: the address of the new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = *head;
	unsigned int i;

	if (new_node == NULL)
	{
		exit(EXIT_FAILURE);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; current != NULL && i < idx - 1; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		free(new_node);

		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
