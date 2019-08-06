#include "lists.h"

/**
*free_listint2 - free a list
*@head: pointer to the first node
**/

void free_listint2(listint_t **head)
{
	listint_t *temp, *tmp;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	tmp = *head;

	while (head != NULL && tmp != NULL)
	{
		temp = tmp;
		tmp = tmp->next;
		free(temp);
	}

	*head = NULL;
}
