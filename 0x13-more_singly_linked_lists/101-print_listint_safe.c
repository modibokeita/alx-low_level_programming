#include "lists.h"
/**
  * print_listint_safe - prints a listint_t linked list
  * @head: a pointer to the first node
  * Return: the number of nodes in the list
  */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *first, *second;

	size_t count = 0;

	if (head == NULL)
		return (0);
	first = head;
	second = head->next;

	while (second != NULL && second < first)
	{
		printf("[%p] %d\n", (void *)first, first->n);
		first = first->next;
		second = second->next;
		count++;
	}
	printf("[%p] %d\n", (void *)first, first->n);
	count++;

	if (second != NULL)
	{
		printf("-> [%p] %d\n", (void *)second, second->n);
		count++;
	}

	return (count);
}
