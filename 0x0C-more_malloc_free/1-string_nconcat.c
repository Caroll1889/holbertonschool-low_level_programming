#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *string_nconcat - concatenate two strings
*@s1: string
*@s2: string
*@n: number of bytes
*Return: over
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	char *over, *nothing;

	nothing = "";

	if (s1 == NULL)
	{
		s1 = nothing;
	}
	if (s2 == NULL)
	{
		s2 = nothing;
	}
	for (a = 0; s1[a] != '\0'; a++)
	;
	for (b = 0; s2[b] != '\0'; b++)
	;
	over = malloc(a + (n * sizeof(*s2) + 1) * sizeof(over));
	if (over == NULL)
	{
		return (NULL);
	}
	for (c = 0; s1[c] != '\0'; c++)
	{
		over[c] = s1[c];
	}
	b = 0;
	while (s2[b] != '\0' && b < n)
	{
		over[c] = s2[b];
		c++;
		b++;
	}
	return (over);
}
