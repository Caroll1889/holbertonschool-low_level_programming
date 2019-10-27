#include "sort.h"


/**
* bubble_sort - function that sort an array
* @array: array
* @size: size
* Return: nothing
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, h;
	int temp;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (i = 1; i < size; i++)
	{
		for (h = 0; h < size - 1; h++)
		{
			if (array[h] > array[h + 1])
			{
				temp = array[h];
				array[h] = array[h + 1];
				array[h + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
