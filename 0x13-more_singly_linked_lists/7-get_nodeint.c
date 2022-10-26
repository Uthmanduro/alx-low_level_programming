#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of the linked list
 * @head: head of the list
 * @index: index of the node starting at 0
 * Return: value at the nth index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (!head)
		return (0);
	temp = head;
	for (i = 0; i < index; i++)
		temp = temp->next;
	return (temp);
}
