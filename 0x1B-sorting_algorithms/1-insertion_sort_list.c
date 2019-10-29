#include "sort.h"

/**
*insertion_sort_list - sorted a double linked list using insertion sort
*@list: double linked list
*Return: Nothing
**/


void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *h_move, *idx;

	if (list == NULL || *list == NULL)
		return;

	h_move = *list;
	idx = *list;
	temp = *list;
	while (h_move != NULL)
	{
		if (h_move == idx)
			h_move = h_move->next;
		else if (h_move != NULL && h_move->n < h_move->prev->n)
		{
			temp = h_move;
			h_move = h_move->next;
			temp->prev->next = temp->next;
			if (h_move)
				temp->next->prev = temp->prev;
			temp->prev = temp->prev->prev;
			temp->next = temp->prev->next;
			temp->prev->next = temp;
			temp->next->prev = temp;
			print_list(*list);
			check(temp, list);
		}
		else
		{
			h_move = h_move->next;
		}
	}
}

/**
* check - sort the list
*@temp: temporal
*@list: double linked list
*Return: Nothing
**/

void check(listint_t *temp, listint_t **list)
{
	while (temp->prev != NULL)
	{
		if (temp->n < temp->prev->n)
		{
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			if (temp->prev->prev == NULL)
			{
				*list = temp;
				temp->next = temp->prev;
				temp->prev = NULL;
			}
			else
			{
				temp->prev = temp->prev->prev;
				temp->next = temp->prev->next;
				temp->prev->next = temp;
			}
			temp->next->prev = temp;
			print_list(*list);
		}
		else
			temp = temp->prev;
	}
}

