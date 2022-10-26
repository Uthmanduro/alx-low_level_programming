#include "lists.h"
/**
 * sum_listint - sum all of the data in the list
 * @head: the head node of the linked list
 * Return: the sum of all the data in the list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (!head)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
