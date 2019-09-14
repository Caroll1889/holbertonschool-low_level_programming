#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* *add_dnodeint_end - add a new node at the end of a list
*@head: pointer to a struct
*@n: data
*Return: address of the new element
**/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *temp = *head;

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
	newnode->next = NULL;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		(*head) = newnode;
		return (NULL);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	newnode->prev = temp;
	return (newnode);
}
