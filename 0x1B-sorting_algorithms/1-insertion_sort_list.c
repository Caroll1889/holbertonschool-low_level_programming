#include "sort.h"

/**
*insertion_sort_list - sorted a double linked list using insertion sort
*@list: double linked list
*Return: Nothing
**/


void insertion_sort_list(listint_t **list)
{
	listint_t *tem = NULL, *move = NULL, *index = NULL, *head = NULL;

	if (list == NULL || *list == NULL)
		return;

	move = *list;
	index = *list;
	tem = *list;
	while (move != NULL)
	{
		head = *list;
		if (move == head)
			move = move->next;
		else if (move != NULL && move->n < move->prev->n)
		{
			tem = move;
			move = move->next;
			tem->next = index;
			index->next = move;
			tem->prev = index->prev;
			if (index->prev)
				index->prev->next = tem;
			index->prev = tem;
			if (move)
				move->prev = index;
			if (head == index)
				*list = tem;
			else if (head != tem)
				*list = head;
			else
				*list = tem;
			print_list(*list);
			check(tem, list);
		}
		else
		{
			move = move->next;
			index = index->next;
		}
	}
}

/**
* check - sort the list
*@tem: temporal
*@list: double linked list
*Return: Nothing
**/

void check(listint_t *tem, listint_t **list)
{
	while (tem->prev != NULL)
	{
		if (tem->n < tem->prev->n)
		{
			tem->prev->next = tem->next;
			tem->next->prev = tem->prev;
			if (tem->prev->prev == NULL)
			{
				*list = tem;
				tem->next = tem->prev;
				tem->prev = NULL;
			}
			else
			{
				tem->prev = tem->prev->prev;
				tem->next = tem->prev->next;
				tem->prev->next = tem;
			}
			tem->next->prev = tem;
			print_list(*list);
		}
		else
			tem = tem->prev;
	}
}

