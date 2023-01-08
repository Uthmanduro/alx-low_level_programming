#include "hash_tables.h"
/**
 * create_node - create a node item
 * @key: the key
 * @value: the value
 * Return: a pointer to the node created
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		exit(98);
	node->key = malloc(sizeof(key));
	if (!node->key)
		exit(98);
	node->value = malloc(sizeof(value));
	if (!node->value)
		exit(98);
	node->next = malloc(sizeof(hash_node_t));
	if (!node->next)
		exit(98);

	node->key = strcpy(node->key, key);
	node->value = strcpy(node->value, value);
	node->next = NULL;

	return (node);
}
/**
 * handle_collision - handles collision if the index are the same
 * @node: node to be inserted
 * @current_node: head node
 * Return: a pointer to the updated node
 */
hash_node_t *handle_collision(hash_node_t *node, hash_node_t *current_node)
{
		node->next = current_node;
		return (node);
}
/**
 * hash_table_set - adds an element to the hash table
 * @ht: element to add to the table
 * @key: key of the element
 * @value: value of the element
 * Return: 1 if successful, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;
	hash_node_t *current_node;

	if (!ht || !key || !value)
		return (0);
	node = create_node(key, value);
	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];
	if (current_node == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	else
	{
		if (strcmp(current_node->key, key) == 0)
		{
			strcpy(current_node->value, value);
			return (1);
		}
		else
		{
			ht->array[index] = handle_collision(node, current_node);
			return (1);
		}
	}
}
