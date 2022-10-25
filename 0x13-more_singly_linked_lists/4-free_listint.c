#include "lists.h"
/**
 * free_listint - frees a listint
 * @head: pointer to free
 */
void free_listint(listint_t *head)
{
	free(*head);
}
