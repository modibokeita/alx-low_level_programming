#include "lists.h"
/**
  * find_listint_loop - finds the loop in a linked list.
  * @head: a pointer to the node
  * Return: The address of the node where the loop starts
  * or NULL if there is no loop
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *find = head;
	listint_t *hare = head;

	if (head == NULL || head->next == NULL)
		return (NULL);

	while (hare != NULL && hare->next != NULL)
	{
		find = find->next;
		hare = hare->next->next;

		if (find == hare)
		{
			find = head;

			while (find != hare)
			{
				find = find->next;
				hare = hare->next;
			}
			return (find);
		}
	}
	return (NULL);
}
