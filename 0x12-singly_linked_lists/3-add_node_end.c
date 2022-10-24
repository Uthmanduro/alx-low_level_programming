#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end
 * @head: double pointer pointer to the address of head
 * @str: string in the node
 * Return: address to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	ptr->str = strdup(str);
	ptr->len = strlen(str);
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
