#include "lists.h"
#include <string.h>
/**
 * add_node - adds new node at the beginning
 * @head: head of the node
 * @str: string in the node
 * Return: a pointer of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	if (*head != NULL)
		temp->next = *head;
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;
	*head = temp;
	return (temp);
}
