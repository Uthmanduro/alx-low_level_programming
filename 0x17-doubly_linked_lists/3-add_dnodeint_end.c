#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: the head of the node
 * @n: data in the node
 * Return: address of a new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *ptr;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	temp->prev = ptr;

	return (temp);
}
