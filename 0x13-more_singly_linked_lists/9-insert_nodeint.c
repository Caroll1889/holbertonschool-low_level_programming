#include "lists.h"

/**
* *insert_nodeint_at_index - insert a new node at a given position
*@head: first node
*@idx: index
*@n: number
*Return: address of the new node
**/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newnode;
	unsigned int dc = 0;

	if (head == NULL && idx != 0)
	{
		return (NULL);
	}
	temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	temp = *head;
	while (dc < idx - 1)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(newnode);
			return (NULL);
		}
		dc++;
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}

