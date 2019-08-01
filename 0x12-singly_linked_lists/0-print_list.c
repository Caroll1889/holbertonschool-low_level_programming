#include "lists.h"
#include <stdio.h>

/**
*print_list - print all the elements
*@h: first node
*Return: number of nodes
**/

size_t print_list(const list_t *h)
{
	size_t s;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		s++;
	}
	return (s);
}
