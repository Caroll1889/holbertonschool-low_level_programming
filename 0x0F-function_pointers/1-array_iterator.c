#include <stdio.h>

/**
*array_iterator - execute a function given as a parameter
*@size: size of array
*@action: pointer to a function
*@array: array
**/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*dh)(int);

	size_t s;

	dh = action;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (s = 0; s < size; s++)
	{
		dh(array[s]);
	}
}
