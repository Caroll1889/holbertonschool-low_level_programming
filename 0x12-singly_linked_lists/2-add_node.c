#include "lists.h"
#include <stdio.h>
#include<string.h>

/**
 * _strlen - Length of a string.
 * @s: pointer.
 * Return: len.
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	return (len);
}

/**
* *add_node - add a new node at the beginning of a list
*@head: pointer to a struct
*@str: string
*Return: address of the nuw element
**/

list_t *add_node(list_t **head, const char *str)
{
	list_t *nn;
	char *nstr;

	nn = malloc(sizeof(list_t));
	if (nn == NULL)
	{
		return (NULL);
	}
	nstr = strdup(str);

	if (nstr == NULL)
	{
		free(nstr);
		return (NULL);
	}
	nn->str = nstr;
	nn->len = _strlen(nstr);
	nn->next = *head;
	*head = nn;
	return (nn);
}
