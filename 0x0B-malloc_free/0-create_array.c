#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create_array - creates an array of char
*@c: char
*@size: size
*Return: c
**/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	if (size != 0)
	{
		arr = malloc(size * sizeof(c));
	}
	else
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
