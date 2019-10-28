#include "sort.h"

/**
* selection_sort - sort an array using Selection Sort
* @array: array
* @size: size
* Return: nothing
**/

void selection_sort(int *array, size_t size)
{
	size_t d, c, min;
	int tmp;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (d = 0; d < size - 1; d++)
	{
		min = d;
		for (c = d + 1; c < size; c++)
		{
			if (array[c] < array[min])
			{
				min = c;
			
			}
		}
		if (min != d)
		{
			tmp = array[d];
			array[d] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
