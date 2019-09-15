#include "lists.h"

/**
* *insert_dnodeint_at_index - insert a new node at a given position
*@h: first node
*@idx: index
*@n: data
*Return: address of the new node
**/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int ind = 1;
	dlistint_t *temp, *newnode;

	if (h == NULL)
	{
		return (NULL);
	}

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	temp = *h;

	while (ind < idx && temp != NULL)
	{
		temp = temp->next;
		ind++;
	}
	if (ind < idx)
	{
		free(newnode);
		return (NULL);
	}
	else
	{
		newnode->n = n;
		if (idx == 0)
		{
			newnode->next = temp;
			*h = newnode;
		}
		else
		{
			newnode->next = temp->next;
			temp->next = newnode;
		}
	}
	return (newnode);
}
