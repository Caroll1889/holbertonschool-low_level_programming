#include "holberton.h"
#include <stdio.h>
/**
* *_strcmp - compare two strings
*@s1: string 1
*@s2: string 2
*Return: integer
**/
int _strcmp(char *s1, char *s2)
{
	int g;

	for (g = 0; s1[g] != '\0'; g++)
	{
		if (s1[g] < s2[g])
			return (s1[g] - s2[g]);
		if (s1[g] > s2[g])
			return (s1[g] - s2[g]);
	}
	return (0);
}
