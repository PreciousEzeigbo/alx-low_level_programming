#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table with a given size
 *
 * @size: size of the hash table
 * Return: the created hash table, or NULL if function fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = NULL;

	if (size == 0)
		return (NULL);
	new_ht = malloc(sizeof(hash_table_t));
	if (!new_ht)
		return (NULL);

	new_ht->size = size;
	new_ht->array = calloc((size_t)size, sizeof(hash_node_t *));

	if (new_ht->array == NULL)
		return (NULL);

	return (new_ht);
}
