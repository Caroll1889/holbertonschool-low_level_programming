#include "lists.h"

/**
* *get_nodeint_at_index - return the nth node of a list
*@head: pointer to the first node
*@index: index
*Return: cr
**/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cr;
	unsigned int js;

	cr = head;

	for (js = 0; js != index; js++)
	{
		if (cr->next == NULL)
		{
			return (NULL);
		}
		cr = cr->next;
	}
	return (cr);
}
