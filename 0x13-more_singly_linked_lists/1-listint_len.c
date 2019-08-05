#include "lists.h"
#include <stdio.h>

/**
*listint_len - return the number of elements
*@h: first node
*Return: number of elements
**/

size_t listint_len(const listint_t *h)
{
	int l = 0;

	while (h != NULL)
	{
		h = h->next;
		l++;
	}
	return (l);
}
