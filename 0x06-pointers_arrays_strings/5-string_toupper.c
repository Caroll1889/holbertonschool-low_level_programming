#include "holberton.h"
#include <stdio.h>
/**
* *string_toupper - change a lowercase
*@e: pointer
*Return: Nothing
**/
char *string_toupper(char *e)
{
	int l;

	for (l = 0; e[l] != '\0'; l++)
	{
		if (e[l] >= 'a' && e[l] <= 'z')
		e[l] = e[l] - 32;
	}
	return (e);
}
