#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*free_grid - free a 2 dimensional grid
*@grid: grid to free
*@height: height of grid
*Return: none
**/
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
