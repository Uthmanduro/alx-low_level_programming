#include "lists.h"
/**
 * free_listint - frees a listint
 * @head: pointer to free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
