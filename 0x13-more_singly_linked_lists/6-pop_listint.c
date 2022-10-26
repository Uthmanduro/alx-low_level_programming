#include "lists.h"
/**
 * pop_listint - deletes the head of a node
 * @head: double pointer to head
 * Return: 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	if (!*head)
		return (0);
	if (*head)
	{
		free(*head);
		return (temp->n);
	}
	return (temp->n);
}
