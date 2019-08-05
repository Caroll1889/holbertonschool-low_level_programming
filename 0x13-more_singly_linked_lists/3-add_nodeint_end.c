#include "lists.h"
#include <stdio.h>

/**
* *add_nodeint_end - add a new node at the end of the list
*@head: pointer to a struct
*@n: number
*Return: address of the new element
**/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnodend, *temp;

	temp = *head;

	newnodend = malloc(sizeof(listint_t));

	if (newnodend == NULL)
	{
		return (NULL);
	}

	newnodend->n = n;
	newnodend->next = NULL;

	if (*head == NULL)
	{
		*head = newnodend;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnodend;
	}
	return (*head);
}
