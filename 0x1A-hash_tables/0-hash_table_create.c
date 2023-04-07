#include "hash_tables.h"

/**
 * hash_table_create - Function creates a hash table
 * @size: The size of the array
 *
 * Return: Pointer to the newly created hash table, NULL if error occurs
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t *arr;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	arr = malloc(size * sizeof(hash_node_t *));
	if (arr == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;
	ht->array = &arr;

	return (ht);
}
