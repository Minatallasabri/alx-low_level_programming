#include "hash_tables.h"
/**
  * hash_table_get - get the value of key
  * @ht: hash table
  * @key: the key we want it value
  *
  * Return: the value of key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new_node;
	unsigned long int i;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	new_node = ht->array[i];
	while (new_node && strcmp(new_node->key, key) != 0)
		new_node = new_node->next;
	if (new_node == NULL)
		return (NULL);

	return (new_node->value);
}
