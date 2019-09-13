#include "lists.h"
#include <stdio.h>

/**
*dlistint_len - return the number of elements
*@h: first node
*Return: number of nodes
**/

size_t dlistint_len(const dlistint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
