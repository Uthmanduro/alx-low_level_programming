#include "lists.h"
/**
 * add_nodeint_end - adds node at the end
 * @head: pointer input
 * @n: value of n to be added
 * Return: address of thr new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = ptr;
	ptr->next = NULL;
	return (ptr);
}
