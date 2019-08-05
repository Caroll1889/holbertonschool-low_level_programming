#include "lists.h"

/**
*pop_listint - delete the head node
*@head: pointer to the first node
*Return: data
**/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int s;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	s = temp->n;
	*head = temp->next;
	free(temp);
	return (s);
}
