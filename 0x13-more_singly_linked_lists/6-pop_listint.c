#include "lists.h"
/**
 * pop_listint - deletes the head of a node
 * @head: double pointer to head
 * Return: 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head)
		return (0);
	temp = *head;
	while (temp)
	{
		n = temp->n;
		*head = (*head)->next;
		free(temp);
		return (n);
	}
	n = temp->n;
	return (n);
}
