#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *_calloc - allocate memory for an array
*@size: size
*@nmemb: integer
*Return: point
**/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *point;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	point = malloc(nmemb * size);

	if (point == NULL)
	{
		return (NULL);
	}
	return (point);
}
