#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *current;


	if (ht == NULL || key == NULL || *key == '\0') {
		return (0); 
	}
	index = key_index((const unsigned char*)key, ht->size);
	current = ht->array[index];

	if (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
	}

	return (NULL);
}
