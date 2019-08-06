#include "lists.h"

/**
* *delete_nodeint_at_index - insert a new node at a given position
*@head: first node
*@index: index
*Return: 1 or -1
**/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *temp;
	unsigned int f, lng;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	lng = 0;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		lng++;
	}
	if (index > lng)
		return (-1);
	tmp = *head;
	if (index == 0 && lng != 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	else if (index == 0)
	{
		*head = NULL;
		free(tmp);
		return (1);
	}
	f = 0;
	while (f != index)
	{
		if (f + 1 == index)
			temp = tmp;
		tmp = tmp->next;
		f++;
	}
	temp->next = tmp->next;
	free(tmp);
	return (1);
}
