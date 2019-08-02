#include "lists.h"
#include <stdio.h>
#include<string.h>

/**
 * _strlen - Length of a string.
 * @s: pointer.
 * Return: len.
 */

int _strlen(const char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	return (len);
}

/**
* *add_node_end - add a new node at the end of a list
*@head: pointer to a struct
*@str: string
*Return: address of the new element
**/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *tem;

	tem = *head;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}

	while (tem->next != NULL)
	{
		tem = tem->next;
	}
		tem->next = newnode;

	return (*head);
}
