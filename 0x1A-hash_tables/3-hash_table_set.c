#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *current_item, *item;

	item = (hash_node_t*) malloc(sizeof(hash_node_t));
	if (item == NULL) {
		return (-1);
	}

	item->key = (char*) malloc(strlen(key) + 1);
	item->value = (char*) malloc(strlen(value) + 1);

	strcpy(item->key, key);
	strcpy(item->value, value);

	index = key_index((const unsigned char*)key, ht->size);

	current_item = ht->array[index];
	while (current_item != NULL) {
		if (strcmp(current_item->key, key) == 0) {

			strcpy(current_item->value, value);
			return (0);
		}
		current_item = current_item->next;
	}
	item->next = ht->array[index];
	ht->array[index] = item;

	return (0);

}
