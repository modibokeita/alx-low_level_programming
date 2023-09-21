#include "lists.h"
/**
  * list_len -  returns the number of elements in a linked list_t list
  * @list_t: the list
  * @h: Pointer to the head of the list
  * Return: number of elements
  */
size_t list_len(const list_t *h)
{
	int count_num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			return (-1);
		h = h->next;
		count_num++;
	}
	return (count_num);
}
