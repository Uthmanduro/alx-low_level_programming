#include "lists.h"
/**
 * add_dnodeint - adds a node at the beginning
 * @head: head of the node
 * @n: data om the node
 * Return: address of the neew element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
	temp->next = ptr;
	ptr->prev = temp;
	*head = temp;

	return (temp);
}
