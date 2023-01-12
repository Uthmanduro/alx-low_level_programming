#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char *sepr;
	hash_node_t *node;

	if (!ht)
		return;
	node = NULL;
	sepr = "";
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL && !node)
			continue;
		if (!node)
			node = ht->array[i];
		while (node)
		{
			printf("%s'%s': '%s'", sepr, node->key, node->value);
			if (node)
				sepr = ", ";
			node = node->next;
		}
	}
	printf("}\n");
}
