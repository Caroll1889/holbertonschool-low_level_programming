#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* *add_dnodeint - add a new node at the beginning of a list
*@head: pointer to a struct
*@n: data
*Return: address of the nuw element
**/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = newnode;
	}
	*head = newnode;
	return (newnode);
}
