#include "holberton.h"
/**
*_strspn - gets the length of a prefix substring
*@s: Pointer. The string that needs to be scanned
*@accept: String which caracter needs to be matched in s
*Return: number of bytes
**/
unsigned int _strspn(char *s, char *accept)
{
	int a, b, h;

	for (a = 0; s[a] != '\0'; a++)
	{
		h = 0;

		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				h = 1;
			}
		}

		if (h == 0)
			break;
	}
	return (a);
}
