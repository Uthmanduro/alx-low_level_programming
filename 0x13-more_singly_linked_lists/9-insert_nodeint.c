#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at a given position
 * @head: the head of the singly linked list
 * @idx: index to insert the node
 * @n: value int hte new node to be inserted
 * Return: address of the new node inserted
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *ptr;
	unsigned int i;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	temp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
		if (temp == NULL)
		       return (NULL);	
	}
	ptr->next = temp->next;
	temp->next = ptr;
	return (ptr);
}
