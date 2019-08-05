#include "lists.h"
#include <stdio.h>

/**
*print_listint - print all the elements
*@h: first node
*Return: number of nodes
**/

size_t print_listint(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
