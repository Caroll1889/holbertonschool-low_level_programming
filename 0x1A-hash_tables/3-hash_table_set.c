#include "hash_tables.h"

/**
* hash_table_set - adds an element to the hash table
*@ht: hash table
*@key: key
*@value: vlue associated with the key
*Return: 1 or 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *temp;
	unsigned long int idx;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);
	idx = key_index(const char *key, ht->size)

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);

	new->key = strdup(key);
	new->value = strdup(value);
	new->node = NULL

	if (ht->array[idx] == NULL) /*esta es la cabeza */
		ht->array[idx] = new;
	else
	{
		/*temp es para no modificar la posición de la cabeza*/
		temp = ht->array[idx];
		while (temp != NULL)
		{
			/*hacemos el update(si el key existe lo actualiza)*/
			if (temp->key == key)
			{
				free(new->value);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next; /*avanzamos sobre la lista */
		}
		/* el siguente del nuevo va a apuntar al que ya estaba */
		new->next = ht->array[idx];
		ht->array[idx] = new; /* hacer que el nuevo nodo sea la cabeza */
	}
	return (1);
}

