#include "lists.h"
/**
  * print_list - prints all the elements of a list_t list
  * @h: a pointer to the head
  * Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t count_num = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count_num++;
	}
	return (count_num);
}
