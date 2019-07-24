#include <stdio.h>

/**
*int_index - function that searches for an integer
*@array: array
*@size: number of elements in the array
*@cmp: pointer to the function
*Return: l or -1
**/

int int_index(int *array, int size, int (*cmp)(int))
{
	int (*js)(int);
	int l, rm;

	js = cmp;

	if (size <= 0)
	{
		return (-1);
	}

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (l = 0; l < size; l++)
	{
		rm = js(array[l]);

		if (rm != 0)
		{
			return (l);
		}
	}
	return (-1);
}
