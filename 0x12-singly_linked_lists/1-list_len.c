#include "lists.h"
#include <stdio.h>

/**
*list_len - return the number of elements
*@h: first node
*Return: number of nodes
**/

size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		h = h->next;
		s++;
	}
	return (s);
}
