#include "hash_tables.h"
/**
 * hash_djb2 - creates the index of the key
 *
 * @str: the key of the item in the hash table
 * Return: the index of the key in the hashtable
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
