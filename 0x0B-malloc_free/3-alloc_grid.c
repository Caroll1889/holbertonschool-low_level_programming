#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* **aloc_grid - return a pointer to a 2 dimensinal array
*@width: width
*@height: height
*Return: yo
**/
int **alloc_grid(int width, int height)
{
	int **yo, d, c, t, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	yo = malloc(height * sizeof(int *));

	if (yo == NULL)
	{
		return (NULL);
	}
	for (d = 0; d < height; d++)
	{
		yo[d] = malloc(width * sizeof(int));
		if (yo[d] == NULL)
		{
			for (c = 0; c < d; c++)
			{
				free(yo[d]);
			}
			free(yo);
			return (NULL);
		}
	}
	for (t = 0; t < height; t++)
	{
		for (k = 0; k < width; k++)
		{
			yo[t][k] = 0;
		}
	}
	return (yo);
}

