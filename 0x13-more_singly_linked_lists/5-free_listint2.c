#include "lists.h"
/**
 * free_listint2 - frees a listint_t
 * @head: double pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	
	temp = *head;
	while (temp)
	{
		*head = temp->next;
		free (temp);
		temp = *head;
	}
	*head = NULL;
}
