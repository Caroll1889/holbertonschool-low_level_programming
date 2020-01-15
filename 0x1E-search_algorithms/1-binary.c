#include "search_algos.h"

/**
*print_arr - print an array
*@array: pointer to the first element of the array to search in
*@left: left side of an array
*@right: right side of an array
**/

void print_arr(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");

	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);

		if (i != right)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
* *binary_search - function that searches for a value in a sorted array
*@array:  pointer to the first element of the array to search in
*@value: the value to search for
*@size:  the number of elements in array
*Return: first index or -1
**/

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int middle;

	while (left <= right)
	{
		print_arr(array, left, right);
		middle = (left + right) / 2;
		if (array[middle] < value)
		{
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			right = middle - 1;
		}
		else
		{
			return (middle);
		}
	}
	return (-1);
}
