#include "holberton.h"
/**
* *_memset - fills memory with a constant byte
*@s: pointer to the object to fill
*@b: fill byte
*@n: number of bytes to fill
*Return: s
**/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
