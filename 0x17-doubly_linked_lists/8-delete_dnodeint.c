#include "lists.h"

/**
* *delete_dnodeint_at_index - delete a new node at a given position
*@head: first node
*@index: index
*Return: 1 or -1
**/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *temp;
	unsigned int count;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	temp = *head;

	if (index == 0)
	{
		if (temp->next == NULL)
		{
			free(temp);
			*head = NULL;
			return (1);
		}
		*head = temp->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	for (count = 0; count < index; count++)
	{
		if (temp->next == NULL)
		{
			return (-1);
		}
		temp = temp->next;
	}
	temp->prev->next = temp->next;
	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
