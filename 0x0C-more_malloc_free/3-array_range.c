#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
* *array_range - create an array of integers
*@min: min
*@max: max
*Return: lm
**/
int *array_range(int min, int max)
{
	int *lm;
	int r;

	if (min > max)
	{
		return (NULL);
	}

	lm = malloc(sizeof(int) * (max - min + 1));

	if (lm == NULL)
	{
		return (NULL);
	}

	for (r = 0; min <= max; r++)
	{
		lm[r] = min;
		min++;
	}
	return (lm);
}
