#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *str_concat - concatenate two strings
*@s1: string
*@s2: string
*Return: new
**/
char *str_concat(char *s1, char *s2)
{
	int d, c, h;
	char *new;
	char *nothing;

	nothing = "";

	if (s1 == NULL)
	{
		s1 = nothing;
	}
	if (s2 == NULL)
	{
		s2 = nothing;
	}
	for (d = 0; s1[d] != '\0'; d++)
		;
	for (c = 0; s2[c] != '\0'; c++)
	{
	}
	c++;
	new = malloc((d + c) * sizeof(new));
	if (new == NULL)
	{
		return (NULL);
	}
	for (h = 0; s1[h] != '\0'; h++)
	{
		new[h] = s1[h];
	}
	c = 0;
	while (s2[c] != '\0')
	{
		new[h] = s2[c];
		h++;
		c++;
	}
	new[h] = '\0';
	return (new);
}
