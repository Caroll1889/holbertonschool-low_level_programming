#include "holberton.h"
#include <stdio.h>
/**
* *cap_string - capitalize all words of a string
*@c: pointer
*Return: e
**/
char *cap_string(char *c)
{
	int j;

	if (c[0] >= 'a' && c[0] <= 'z')
	{
		c[0] = c[0] - 32;
	}
	for (j = 1; c[j] != '\0'; j++)
	{
		if ((c[j - 1] == ' ' || c[j - 1] == '\t' || c[j - 1] == '\n' || c[j - 1] ==
		',' || c[j - 1] == ';' || c[j - 1] == '.' || c[j - 1] == '!' || c[j] == '?'
		|| c[j - 1] == '"' || c[j - 1] == '(' || c[j - 1] == ')' || c[j - 1] == '{'
		|| c[j - 1] == '}') && (c[j] > 'a' && c[j] < 'z'))
		{
			c[j] = c[j] - 32;
		}
	}
	return (c);
}
