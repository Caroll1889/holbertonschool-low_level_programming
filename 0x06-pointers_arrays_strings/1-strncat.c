#include "holberton.h"
#include <stdio.h>
/**
* *_strncat - concatenates two strings
*@dest: pointer
*@src: pointer
*@n: number of bytes
*Return: dest
**/
char *_strncat(char *dest, char *src, int n)
{
	int b, k;

	for (b = 0; dest[b] != '\0'; b++)
	;
	for (k = 0; src[k] != '\0' && k < n; k++)
	{
		dest[k + b] = src[k];
	}
	return (dest);
}
