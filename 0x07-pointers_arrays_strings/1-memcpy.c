#include "holberton.h"
/**
* *_memcpy - copies memory area
*@dest: Pointer to the destination array where the content is to be copied
*@src: Pointer to the source of data to be copied
*@n: number of bytes to copy
*Return: dest
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

	for (b = 0; b < n; b++)
	{
		dest[b] = src[b];
	}
	return (dest);
}
