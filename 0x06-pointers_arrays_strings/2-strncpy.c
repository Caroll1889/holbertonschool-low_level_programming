#include "holberton.h"
#include <stdio.h>
/**
* *_strncpy - copy a string
*@dest: pointer
*@src: pointer
*@n: number of bytes
*Return: dest
**/
char *_strncpy(char *dest, char *src, int n)
{
	int m = 0, c;

	for (c = 0; src[c] != '\0' && c != n; c++)
	{
		dest[m] = src[c];
		m++;
	}
	while (m != n)
		dest[m++] = '\0';
	return (dest);
}
