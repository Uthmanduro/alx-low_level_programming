#include "lists.h"
/**
 * print_listint - prints all element of a list
 * @h: element to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->n == 0)
			return (0);
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
