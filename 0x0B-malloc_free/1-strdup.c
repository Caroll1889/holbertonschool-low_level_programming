#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *_strdup - return a pointer to a new string
*@str:string
*Return: copy
**/
char *_strdup(char *str)
{
	unsigned int a, b;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	for (a = 0; str[a] != '\0'; a++)
	{
	}

	copy = malloc((a + 1) * sizeof(str));
	if (copy == NULL)
	{
		return (NULL);
	}

	b = 0;
	while (b < (a + 1))
	{
		copy[b] = str[b];
		b++;
	}
	return (copy);
}
