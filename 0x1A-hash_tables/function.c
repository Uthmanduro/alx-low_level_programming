#include "stdio.h"
/**
 * hash_function - creates the index of the key
 *
 * @key: the key of the item in the hash table
 * Return: the index of the key in the hashtable
 */
unsigned long int hash_function(char *key, unsigned long int size)
{
        unsigned long int i = 0;
        int j;

        for (j = 0; key[j]; j++)
                i += key[j];
        return (i % size);
}

/**
 * create_node - allocate memroy for the new node created
 * @key: the key of the node
 * @value: the value assigned to the node
 * @next: a pointer to the next node of the table
 * Return: a pointer to the node created
 */
hash_node_t *create_node(char *key, char *value)
{
        hash_node_t *item;

        item = malloc(sizeof(hash_node_t));
        if (!item)
                exit(98);
        item->key = malloc(sizeof(key));
        if (!item->key)
                exit(98);
        item->value = malloc(sizeof(value));
        if (!item->value)
                exit (98);

        strcpy(item->key, key);
        strcpy(item->value, value);
        item->next = NULL;
        return (item);
}

/**
 * free_node - fees the node in the hash table
 * @node: node to be freed
 */
void free_node(hash_node_t *node)
{
        free(node->key);
        free(node->value);
        free(node);
}

/**
 * free_table - free the hash table
 * @table: table to be freed
 */
void free_table(hash_table_t *table)
{
        unsigned long int i;
        hash_node_t *item;

        for (i = 0; i < table->size; i++)
        {
                item = table->array[i];
                if (item != NULL)
                        free(item);
        }
        free(table->array);
        free(table);
}

/**
 * hash_table_insert - inserts data into the hash table
 * @table: table tha data will be inserted
 * @key: key of the data
 * @value: value of the data to be insert
*/
handle_collision(ht, node)
{
	node->next = malloc(sizeof(hash_node_t));
	node->next = 
}
