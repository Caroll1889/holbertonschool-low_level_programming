#include "search_algos.h"

/**
* *linear_search - function that searches for a value in an array
*@array:  pointer to the first element of the array to search in
*@value: the value to search for
*@size:  the number of elements in array
*Return: first index or -1
**/

int linear_search(int *array, size_t size, int value)
{
	int sizet = size;
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < sizet; i++)
	{
		if (value == array[i])
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	return (-1);
}
