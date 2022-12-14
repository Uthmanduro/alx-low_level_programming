#include "lists.h"
/**
 * add_nodeint - adds node at the begining
 * @head: beginnning of the list
 * @n: value of list to be added
 * Return: address of the new element added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	temp->next = *head;
	*head = temp;
	return (temp);
}
