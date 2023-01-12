#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	
	if (!ht)
		return;
	node = NULL;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL && !node)
			continue;
		if (!node)
			node = ht->array[i];
		if (node)
			printf("'%s': '%s'", node->key, node->value);
		node = node->next;
		while (!node && i < ht->size)
			node = ht->array[++i];
		if (node)
			printf(", ");
	}
	printf("}\n");
}
