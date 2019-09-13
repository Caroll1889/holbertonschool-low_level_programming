#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
*print_dlistint - print all the elements
*@h: first node
*Return: number of nodes
**/

size_t print_dlistint(const dlistint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
