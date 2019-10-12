#include "hash_tables.h"

/**
* *hash_table_get - retrieves a value associated with a key
*@ht: hash table
*@key: key
*Return: value
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (key == NULL || ht == NULL)
		return (NULL);

	/* obtener el index del key */
	index = key_index((unsigned char *)key, ht->size);

	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
