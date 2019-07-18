#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
* *_calloc - allocate memory for an array
*@size: size
*@nmemb: integer
*Return: point
**/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *point;
	unsigned int z;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	point = malloc((nmemb) * size);

	if (point == NULL)
	{
		return (NULL);
	}
	for (z = 0; z < (nmemb * size); z++)
	{
		point[z] = 0;
	}
	return (point);
}
