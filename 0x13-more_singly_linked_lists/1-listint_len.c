#include "lists.h"
#include <stddef.h>
/**
  * listint_len - returns the number of elements
  * in a linked listint_t list.
  * @h: a pointer to the first node
  * Return: the number of elements in a
  * linked listint_t list
  */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	const listint_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		num++;
		ptr = ptr->next;
	}
	return (num);
}
