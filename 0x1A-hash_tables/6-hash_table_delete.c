#include "hash_tables.h"


/**
* hash_table_delete - delete a hash table
* @ht: hash table
* Return: Nothing
**/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *temp = NULL, *aux = NULL;

	if (ht == NULL)
	{
		exit(1);
	}

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		temp = ht->array[idx];
		while (temp)
		{
			aux = temp;
			temp = aux->next;
			free(aux->value);
			free(aux->key);
			free(aux);
		}
	}
	free(ht->array);
	free(ht);
}
