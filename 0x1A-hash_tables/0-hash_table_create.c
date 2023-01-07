#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - creates the table
 *
 * @size: the size of the table
 * Return: a pointer to the table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));
	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}

