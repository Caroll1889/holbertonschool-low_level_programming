#include "lists.h"

/**
* *get_dnodeint_at_index - return the nth node of a list
*@head: pointer to the first node
*@index: index
*Return: cr
**/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ind;

	if (head == NULL)
	{
		return (NULL);
	}

	ind = 0;

	while (ind < index)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		head = head->next;
		ind++;
	}
	return (head);
}
