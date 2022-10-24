#include "lists.h"
/**
 * listint_len - returns the number of element in a list
 * @h: integer to be passed into function
 * Return: number of element in the list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (!h)
		return (count);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
