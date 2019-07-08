#include "holberton.h"
/**
*_strpbrk - searches a string for any of a st of bytes
*@s: Pointer. The string that needs to be scanned
*@accept: String which caracter needs to be matched in s
*Return: Pionter or null
**/
char *_strpbrk(char *s, char *accept)
{
	int c, b, m;

	for (c = 0; s[c] != '\0'; c++)
	{
		m = 0;

		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[c] == accept[b])
			{
				m = 1;
			}
		}

		if (m == 1)
		{
			return (s + c);
		}
	}
	return ('\0');
}
