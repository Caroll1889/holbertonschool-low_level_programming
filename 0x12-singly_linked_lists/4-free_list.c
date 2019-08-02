#include "lists.h"

/**
*free_list - free a list
*@head: pointer to the first node
**/

void free_list(list_t *head)
{
	list_t *tem;

	while (head != NULL)
	{
		tem = head;
		head = head->next;
		free(tem->str);
		free(tem);
	}
}
