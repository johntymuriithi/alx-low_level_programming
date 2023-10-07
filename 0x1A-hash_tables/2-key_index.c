#include "hash_tables.h"
/**
 * key_index - get the key
 * @key: key to get
 * @size: size of the hash table
 *
 * Return: return key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int num;

	num = hash_djb2(key);

	return (num % size);
}
