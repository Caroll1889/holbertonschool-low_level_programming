#include "holberton.h"
#include <stdio.h>
/**
* *_strcat - concatenates two strings
*@dest: pointer
*@src: pointer
*Return: dest
**/
char *_strcat(char *dest, char *src)
{
	int i, d;

	for (i = 0; dest[i] != '\0'; i++)
	;
	for (d = 0; src[d] != '\0'; d++)
	{
		dest[d + i] = src[d];
	}
	return (dest);
}
