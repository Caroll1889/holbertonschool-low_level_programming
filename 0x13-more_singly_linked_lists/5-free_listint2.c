#include "lists.h"

/**
*free_listint2 - free a list
*@head: pointer to the first node
**/

void free_listint2(listint_t **head)
{
	listint_t *temp, *temp2;

	if (*head == NULL || head == NULL)
	{
		return;
	}

	temp2 = *head;

	while (head != NULL && temp2 != NULL)
	{
		temp = temp2;
		temp2 = temp2->next;
		free(temp);
	}

	*head = NULL;
}
