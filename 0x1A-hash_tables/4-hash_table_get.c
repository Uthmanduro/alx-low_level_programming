#include "hash_tables.h"
/**
 * hash_table_get - retrieves the value associated by a key
 * @ht: the hash table
 * @key: key used to get the value
 * Return: the value associated with the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *node;

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			(return node->value);
	}
	return (NULL);
}
