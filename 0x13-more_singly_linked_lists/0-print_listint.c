#include "lists.h"

/**
  * print_listint - prints all the elements of a listint_t list.
  * @h: pointer to the first node
  * Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t count_num = 0;

	const listint_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count_num++;
	}
	return (count_num);
}

