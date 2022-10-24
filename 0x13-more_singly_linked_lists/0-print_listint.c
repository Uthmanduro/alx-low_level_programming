#include "lists.h"
/**
 * print_listint - prints all element of a list
 * @h: element to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (!h)
		return (NULL);
	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
