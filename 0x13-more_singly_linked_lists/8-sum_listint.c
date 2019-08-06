#include "lists.h"

/**
*sum_listint - return the sum of all the elements
*@head: first node
*Return: sum
**/

int sum_listint(listint_t *head)
{
	int add = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
