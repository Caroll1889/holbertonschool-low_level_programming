#include "sort.h"


/**
* quick_sort - sort an array using quick sort
* @array: array
* @size: size
* Return: Nothing
**/

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	_quicksort(array, 0, size - 1, size);
}

/**
* _partition - partition
* @array: array
* @low: low 
* @high: high
* Return: i + 1
**/

int _partition (int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = (low - 1);
	int j;
	int tem;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
			tem = array[i];
			array[i] = array[j];
			array[j] = tem;
			print_array(array, size);
			}
		}
	}
	if (array[high] < array[i + 1])
	{

		tem = array[i + 1];
		array[i + 1] = array[high];
		array[high] = tem;
		print_array(array, size);
	}
	return (i + 1);
}


/**
* _quicksort - sort a partition
* @low: low
* @high: high
* @size: size
* Return: Nothing
**/

void _quicksort(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = _partition(array, low, high, size);
		_quicksort(array, low, pivot - 1, size);
		_quicksort(array, pivot + 1, high, size);
	}
}
