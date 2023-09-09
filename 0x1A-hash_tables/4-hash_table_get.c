#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value by using a key
 * @ht: table to get value from
 * @key: value's key
 *
 * Return: key's value, or NULL if key cannot be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int id;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0)
		return (NULL);
	id = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[id];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
