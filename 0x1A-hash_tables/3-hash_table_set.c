#include "hash_tables.h"
/**
 * create_node - function to create a node
 * @key: key of the node
 * @value: value of the node
 *
 * Return: return new_node
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	return (new_node);
}

/**
 * hash_table_set - function to create the table with nodes
 * @ht: node
 * @key: specific key
 * @value: value of the node
 *
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	int index;
	hash_node_t *current;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			current->value = strdup(value);
			if (current->value == NULL)
			{
				return (0);
			}
			return (1);
		}
		current = current->next;
	}

	new_node = create_node(key, value);
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
