#include "hash_tables.h"


/**
* hash_table_print - print a hash table
* @ht: hash table
* Return: Nothing
**/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx, i = 0;
	hash_node_t *temp;

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
			if (i)
			{
				printf(", ");
			}
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			i++;
		}
	}
	printf("}\n");
}

