#include "holberton.h"
#include <stdio.h>
/**
* *rot13 - incode a string
*@p: pointer
*Return: p
**/
char *rot13(char *p)
{
	int e, f;

	char m[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char c[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (e = 0; p[e] != '\0'; e++)
	{
		for (f = 0; m[f] != '\0'; f++)
		{
			if (p[e] == m[f])
			{	p[e] = c[f];
				break;
			}
		}
	}
	return (p);
}
