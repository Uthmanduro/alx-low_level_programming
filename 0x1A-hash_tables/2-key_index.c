#include "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: the key
 * @size: siz of the table
 * Return: index at which the key/value pair should be inserted
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash % size);
}
