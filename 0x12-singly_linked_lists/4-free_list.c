#include "lists.h"
/**
  * free_list - frees a list_t list
  * @head: Pointer to a pointer to the head of the list
  * Return: 0
  */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head;

		head = head->next;
		free(temp->str);
		free(temp);
	}
}
